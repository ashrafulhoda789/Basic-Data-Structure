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

void insert_at_head(Node* &head,Node* &tail,int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    head->prev = newNode;
    newNode->next = head;
    head = newNode;

}

void insert_at_tail(Node* &head, Node* &tail,int val){
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

void insert_at_any_pos(Node* &head,int idx,int val){
    Node* newNode = new Node(val);

    Node* temp = head;
    for(int i=1; i<idx; i++){
        temp = temp->next;
    }
    newNode->next = temp->next;
    temp->next->prev = newNode;
    temp->next = newNode;
    newNode->prev = temp;

}

void reverse_doubly(Node* head, Node* tail){
    Node* i = head;
    Node* j = tail;
    while(i != j && j != i->prev){
        swap(i->val,j->val);
        i = i->next;
        j = j->prev;
    }
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

void print_forward(Node* &head){
    Node* temp = head;

    cout << "L -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->next;
    }
    cout << endl;
}

void print_backward(Node* &tail){
    Node* temp = tail;

    cout << "R -> ";
    while(temp != NULL){
        cout << temp->val << " ";
        temp = temp->prev;
    }
    cout << endl;
}

int main(){
    
    int q;
    cin >> q;

    Node* head = NULL;
    Node* tail = NULL;
    
    while(q--){
        int x,v;
        cin >> x >> v; 

        int len = size_of_linked_list(head);
        if(x > len){
            cout << "Invalid" << endl;
            continue;
        }

        if(x == len){
            insert_at_tail(head,tail,v);
        }
        else if(x == 0){
            insert_at_head(head,tail,v);
        }
        else{
            insert_at_any_pos(head,x,v);
        }
        print_forward(head);
        print_backward(tail);
        
    }
    return 0;
}