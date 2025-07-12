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

void search(Node* &head, long long int x){
    Node* temp = head;
    int count = 0;
    bool found = false;
    
    while(temp != NULL){
        if(x == temp->val){
            cout << count << endl;
            found = true;
            break;
        }
        count++;
        temp = temp->next;
    }

    if(!found){
        cout << "-1" << endl;
    }

}

int main(){
    int t;
    cin >> t;

    while(t--){
        Node* head = NULL;
        Node* tail = NULL;

        long long int val;
        while(1){
            cin >> val;
            if(val == -1){
                break;
            }
            insert_at_tail(head,tail,val);
        }
        long long int x;
        cin >> x;

        search(head,x);
    }
    
    return 0;
}