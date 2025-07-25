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

void insert_at_tail(Node* &head, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        return;
    }

    Node* temp = head;
    while(temp->next != NULL){

        temp = temp->next;
    }
    temp->next = newNode;

}

void print_linked_list(Node* &head){
    Node* temp = head;

    while(temp != NULL){
        cout << temp->val << endl;
        temp = temp->next;
    }
}

int main(){
    Node* head =  NULL;
    // Node* a = new Node(20);
    // Node* b = new Node(30);

    // head->next = a;
    // a->next = b;

    insert_at_tail(head,40);
    insert_at_tail(head,50);
    insert_at_tail(head,60);
    print_linked_list(head);
    return 0;
}