#include<bits/stdc++.h>
using namespace std;

class Node
{
    public:
    int val;
    Node* left;
    Node* right;

    Node(int val){
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

Node* input_tree()
{
    int val;
    cin >> val;
    Node* root ;
    if(val == -1)
        root = NULL;
    else root = new Node(val);

    queue<Node *> q;
    if(root != NULL) q.push(root);

    while(!q.empty()){
        //1
        Node* p = q.front();
        q.pop();

        //2
        int l,r;
        cin >> l >> r;
        Node *myLeft,*myRight;
        if(l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);
        if(r == -1)
            myRight = NULL;
        else   
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        //3
        if(p->left)
            q.push(p->left);
        if(p->right)
            q.push(p->right);
    }
    return root;
}

bool search(Node* root,int val)
{
    if(root == NULL) return false;

    if(root->val == val) return true;

    if(val > root->val)
        return search(root->right,val);
        
    else if(val < root->val)
        return search(root->left,val);
        
}

int main(){
    Node* root = input_tree();
    int val;
    cin >> val;

    if(search(root,val))
        cout << "Found" << endl;
    else    
        cout << "Not Found" << endl;
    return 0;
}