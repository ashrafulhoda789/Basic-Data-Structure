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

int size_of_linked_list(Node* &head){
    int count = 0;

    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }
    return count;
}

void same_or_not(Node* &head1,Node* &head2){
    int length1 = size_of_linked_list(head1);
    int length2 = size_of_linked_list(head2);

    if(length1 != length2){
        cout << "NO" << endl;
    }
    else{
        Node* temp1 = head1;
        Node* temp2 = head2;

        bool flag = false;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val == temp2->val){
                flag = true;
                break;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        if(flag == true){
            cout << "YES" << endl;
        }else{
            cout << "NO" << endl;
        }
    }
    
}

void print_linked_list(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    Node* head1 = NULL;
    Node* tail1 = NULL;

    int val1;
    while(true){
        cin >> val1;

        if(val1 == -1){
            break;
        }
        insert_at_tail(head1,tail1,val1);
    }
    //print_linked_list(head1);

    Node* head2 = NULL;
    Node* tail2 = NULL;

    int val2;
    while(true){
        cin >> val2;

        if(val2 == -1){
            break;
        }
        insert_at_tail(head2,tail2,val2);
    }
    //print_linked_list(head2);

    same_or_not(head1,head2);
    return 0;
}