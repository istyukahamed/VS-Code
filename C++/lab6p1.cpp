// Binary Search Tree 

#include <iostream>

using namespace std;

struct Node {
    int data;
    Node *left;
    Node *right;

    Node (int n) {
        data=n;
        left=NULL;
        right=NULL;
    }
};

void insert(Node *node, int x) {
    if(x<node->data){
        if(node->left==NULL) {
            node->left = new Node(x);
        }else{
            insert(node->left, x);
        }
    }
    if(x>node->data) {
        if(node->right==NULL) {
            node->right = new Node(x);
        }else{
            insert(node->right, x);
        }
    }
}


void inorder(Node *node) {
    if(node==NULL) {
        return;
    }
    inorder(node->left);
    cout<<node->data<<" ";
    inorder(node->right);
}


int main()
{
    int i, n, x;

    Node *root = NULL;
    cin>>n;

    for(i=0; i<n; i++) {
        cin>>x;
        if(root==NULL) {
            root = new Node(x);
        }else {
            insert(root, x);
        }
    }
    cout<<"In-order"<<endl;
    inorder(root);

    return 0;
}