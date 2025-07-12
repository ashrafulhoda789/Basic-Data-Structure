#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* prev;
    Node* next;

    Node(int val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    newNode->prev = tail;
    tail = newNode;

}

void palindrome_linked_list(Node* &head, Node* &tail){
    Node* i = head;
    Node* j = tail;

    bool flag = true;

    while(i != j && j != i->prev){

        if(i->val != j->val){
            flag = false;
            break;
        }
        i = i->next;
        j = j->prev;
    }

    if(flag == true){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}


int main(){
    Node* head = NULL;
    Node* tail = NULL;
    
    int val;
    while(true){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    palindrome_linked_list(head,tail);
    return 0;
}
//Palindrome check Singly linked list
/*
      void insert_at_tail(ListNode* &head,ListNode* &tail,int val){
        ListNode* newNode = new ListNode(val);
        if(head == NULL){
            head = newNode;
            tail = newNode;
            return;
        }
        tail->next = newNode;
        tail = newNode;

    }
    void reverse(ListNode* &head,ListNode* temp){
            if(temp->next == NULL){
                head = temp;
                return;
            }

            reverse(head,temp->next);
            temp->next->next = temp;
            temp->next = NULL;
    }
    bool isPalindrome(ListNode* head) {
        ListNode* newHead = NULL;
        ListNode* newTail = NULL;

        ListNode* temp = head;
        while(temp != NULL){
            insert_at_tail(newHead,newTail,temp->val);
            temp = temp->next;
        }
        bool flag = true;
        reverse(newHead,newHead);
        temp = head;
        ListNode* temp1 = newHead;
        while(temp!=NULL){
            if(temp->val != temp1->val){
                flag = false;
                break;
            }else{
                temp = temp->next;
                temp1 = temp1->next;
            }
        }
        return flag;
    }

*/