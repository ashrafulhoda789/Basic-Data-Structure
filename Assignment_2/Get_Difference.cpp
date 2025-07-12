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

int maxmimum_find(Node* &head){
    Node* temp = head;

    Node* max = head;

    while(temp != NULL){
        if(max->val < temp->val){
            max = temp;
        }
        temp = temp->next;
    }

    return max->val;
}

int minimum_find(Node* &head){
    Node* temp = head;

    Node* min = head;

    while(temp != NULL){
        if(min->val > temp->val){
            min = temp;
        }
        temp = temp->next;
    }

    return min->val;
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
    int max = maxmimum_find(head);
    int min = minimum_find(head);

    int diff = max - min;
    cout << diff << endl;
    return 0;
}