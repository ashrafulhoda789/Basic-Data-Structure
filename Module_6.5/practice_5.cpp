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

void insert_at_tail(Node* &head,Node* &tail, int val){
    Node* newNode = new Node(val);

    if(head == NULL){
        head = newNode;
        tail = newNode;
        return;
    }
    tail->next = newNode;
    tail = tail->next;
}

void isDuplicate(Node* &head){
    if(head == NULL || head->next == NULL){
        cout << "NO" << endl;
    }

    Node* temp = head;
    int count = 0;

    while(temp != NULL){
        Node* temp2 = temp->next;
        
        while(temp2 != NULL){
            if(temp->val > temp2->val){
                count++;
                break;
            }
            temp2 = temp2->next;
        }

        temp = temp->next;
    }

    if(count == 0){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }
}

int main(){
    Node* head= NULL;
    Node* tail = NULL;

    int val;
    while(true){
        cin >> val;

        if(val == -1){
            break;
        }
        insert_at_tail(head,tail,val);
    }
    isDuplicate(head);
    return 0;
}