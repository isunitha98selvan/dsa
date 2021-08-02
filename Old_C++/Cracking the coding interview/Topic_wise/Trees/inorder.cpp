#include <iostream>
#include <bits/stdc++.h>

using namespace std;
struct Node
{
    int data;
    struct Node* left;
    struct Node* right;
    Node(int data) {
        this->data = data;
        left = right = NULL;
    }
};

void inorder(Node *root) {
    vector<int> result;
    stack<Node*> s;
    Node* curr = root;
    while(!s.empty() || curr!=NULL) {
        while(curr!=NULL) {
            s.push(curr);
            curr = curr->left;
        }
        curr = s.top();
        s.pop();
        result.push_back(curr->data);
        curr = curr->right;
    }
    for(int i=0;i<result.size();i++){
        cout<<result[i];
    }
}
int main()
{
    struct Node *root = new Node(1);
    root->left        = new Node(2); 
    root->right       = new Node(3); 
    root->left->left  = new Node(4); 
    root->left->right = new Node(5); 
    inorder(root);
    return 0;
}