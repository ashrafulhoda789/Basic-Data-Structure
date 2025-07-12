#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* next;

    Node(int val){
        this->val = val;
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
    tail = tail->next;

}

void remove_duplicate(Node* head){
    Node* temp = head;

    while(temp != NULL){
        Node* temp1 = temp;
        while(temp1->next){
            if(temp1->next->val == temp->val){
                Node* duplicate = temp1->next;
                temp1->next = temp1->next->next;
                delete(duplicate);
            }else{
                temp1 = temp1->next;
            }
        }
        temp = temp->next;
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
    Node* head = NULL;
    Node* tail = NULL;

    int val;
    while(1){
        cin >> val;
        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    remove_duplicate(head);
    print_linked_list(head);
    return 0;
}