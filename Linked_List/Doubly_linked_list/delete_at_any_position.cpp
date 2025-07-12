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

void delete_at_any_pos(Node* &head,Node* &tail,int idx){
    
    Node* temp = head;

    for(int i=1; i<idx; i++){
        temp = temp->next;
    } 
    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    temp->next->prev = temp;

    delete(deleteNode);

}


void print_forward(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main(){
    
    Node* head = new Node(10);
    Node* a = new Node(20);
    Node* b = new Node(30);
    Node* tail = new Node(40);

    head->next = a;
    a->prev = head;
    a->next = b;
    b->prev = a;
    b->next = tail;
    tail->prev = b;

    delete_at_any_pos(head,tail,2);
    print_forward(head);
    return 0;
}