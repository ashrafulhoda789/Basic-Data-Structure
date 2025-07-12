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

int main(){
    Node* node = new Node(5);
    cout << node->val << endl;
    //Node* head = new Node(10);
    // Node* a = new Node(20);
    // Node* b = new Node(300);
    
    // //(*head).next = a;
    // head->next =  a;
    // a->next = b;

    // cout << head->val << " " 
    //     << head->next->val << " " 
    //         << head->next->next->val << " ";
    return 0;
}