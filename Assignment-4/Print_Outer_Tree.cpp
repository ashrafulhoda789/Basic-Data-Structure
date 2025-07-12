#include <bits/stdc++.h>
using namespace std;

class Node {
public:
    int val;
    Node* left;
    Node* right;

    Node(int val) {
        this->val = val;
        this->left = NULL;
        this->right = NULL;
    }
};

void left_boundary(Node* root, vector<int>& res){
    if(root == NULL || (root->left == NULL && root->right == NULL)){
        return;
    }

    res.push_back(root->val);

    if(root->left) left_boundary(root->left,res);
    else if(root->right) left_boundary(root->right,res);
}

void outer_side(Node* root){
    if(root == NULL){
        return;
    }

    vector<int> res;


}


Node* input_tree() {
    int val;
    cin >> val;
    Node* root;
    if (val == -1) {
        root = NULL;
    } else {
        root = new Node(val);
    }

    queue<Node*> q;
    if (root != NULL) q.push(root);

    while (!q.empty()) {
        Node* p = q.front();
        q.pop();

        int l, r;
        cin >> l >> r;
        Node* myLeft, *myRight;

        if (l == -1)
            myLeft = NULL;
        else
            myLeft = new Node(l);

        if (r == -1)
            myRight = NULL;
        else
            myRight = new Node(r);

        p->left = myLeft;
        p->right = myRight;

        if (p->left)
            q.push(p->left);
        if (p->right)
            q.push(p->right);
    }

    return root;
}

int main() {
    Node* root = input_tree();
    
    
    return 0;
}
