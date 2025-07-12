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

void same_to_same(Node* &head1,Node* &head2, int s1, int s2){
    if(s1 != s2){
        cout << "NO" << endl;
        return;
    }
    else{
        Node* temp1 = head1;
        Node* temp2 = head2;

        while(temp1 != NULL && temp2 != NULL){
            if(temp1->val != temp2->val){
                cout << "NO" << endl;
                return;
            }
            temp1 = temp1->next;
            temp2 = temp2->next;
        }

        cout << "YES" << endl;
    }

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

    same_to_same(head1,head2,size1,size2);
    return 0;
}