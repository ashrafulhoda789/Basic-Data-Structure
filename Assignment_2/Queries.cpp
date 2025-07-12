#include <bits/stdc++.h>
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

void insert_at_head(Node*& head, int v) {
    Node* newNode = new Node(v);
    
    newNode->next = head;
    head = newNode;
}

void insert_at_tail(Node*& head,Node* &tail, int v) {
    Node* newNode = new Node(v);
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        tail = newNode;
        return;
    } else {
        Node* temp = head;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        temp->next = newNode;
    }
}

void delete_at_head(Node* &head){
    if(head == NULL){
        return;
    }

    Node* deleteNode = head;
    head = head->next;

    delete(deleteNode);
}

void delete_at_any_pos(Node*& head, int v) {
    if (head == NULL){
        return;
    } 

    Node* temp = head;
    for (int i = 0; i < v - 1 && temp != NULL; i++) {
        temp = temp->next;
    }

    if (temp == NULL || temp->next == NULL){
        return;
    } 

    Node* deleteNode = temp->next;
    temp->next = temp->next->next;
    delete(deleteNode) ;
}

void print_linked_list(Node* head) {


    Node* temp = head;
    while (temp != NULL) {
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    int t;
    cin >> t;

    Node* head = NULL;
    Node* tail = NULL;

    while(t--) {
        int x, v;
        cin >> x >> v;

        if (x == 0) {
            insert_at_head(head, v);
        } 
        else if (x == 1) {
            insert_at_tail(head,tail, v);
        } 
        else if (x == 2) {
            if(v==0){
                delete_at_head(head);
            }else{
                delete_at_any_pos(head, v);
            }
            
        }
        
        print_linked_list(head);
    }

    return 0;
}
