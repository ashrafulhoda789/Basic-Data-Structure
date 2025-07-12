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

int getSized(Node* &head){
    int count = 0;
    Node* temp = head;

    while(temp != NULL){
        count++;
        temp = temp->next;
    }

    return count;
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
    int size1 = getSized(head1);

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

    int size2 = getSized(head2);

    if(size1 == size2){
        cout << "YES" << endl;
    }else{
        cout << "NO" << endl;
    }

    return 0;
}