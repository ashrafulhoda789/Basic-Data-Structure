#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    string val;
    Node* prev;
    Node* next;

    Node(string val){
        this->val = val;
        this->prev = NULL;
        this->next = NULL;
    }
};

void insert_at_tail(Node* &head, Node* &tail,string val){
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

void visit_node(Node* &head,Node* &tmp, string address){
    Node* temp = head;
    while(temp != NULL){
        if(temp->val == address){
            tmp = temp;
            cout << tmp->val << endl;
            return ;
        }
        temp = temp->next;
    }
    cout << "Not Available" << endl;
}

void next_node(Node* &tmp){
    if(tmp != NULL && tmp->next!=NULL){
        tmp = tmp->next;
        cout << tmp->val << endl;
    }else{
        cout << "Not Available" << endl;
    }
}

void previous_node(Node* &tmp){
    if(tmp != NULL && tmp->prev != NULL){
        tmp = tmp->prev;
        cout << tmp->val << endl;
    }else{
        cout << "Not Available" << endl;
    }
}

int main(){

    Node* head = NULL;
    Node* tail = NULL;
    Node* tmp = NULL;

    string address;

    while(true){
        cin >> address;
        if(address == "end"){
            break;
        }
        insert_at_tail(head,tail,address);
    }

    int q;
    cin >> q;

    string cmd;
    while(q--){
        cin >> cmd;
        if(cmd == "visit"){
            cin >> address;
            visit_node(head,tmp,address);

        }else if(cmd == "next"){
            next_node(tmp);
        }else if(cmd == "prev"){
            previous_node(tmp);
        }
    }
    
    return 0;
}