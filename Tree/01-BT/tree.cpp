#include<iostream>
#include<bits/stdc++.h>

using namespace std;

class Node{
public:
    int data;
    Node* left;
    Node* right;
    Node(int val){
        data = val;
        left = nullptr;
        right = nullptr;        
    }
};

void prefixTraversal(Node* root){

    if(root == nullptr)
        return;

    cout<<root->data<<" ";
    prefixTraversal(root->left);
    prefixTraversal(root->right);   
}
void postTraversal(Node* root){

    if(root == nullptr)
        return;

    prefixTraversal(root->left);
    prefixTraversal(root->right);   
    cout<<root->data<<" ";
}
void infixTraversal(Node* root){

    if(root == nullptr)
        return;

    prefixTraversal(root->left);
    cout<<root->data<<" ";
    prefixTraversal(root->right);   
}

int main(){
    Node* root = new Node(1);
    root->left = new Node(5);
    root->right = new Node(6);
    root->left->right = new Node(10);
    root->left->left = new Node(15);
    root->right->right = new Node(12);
    root->right->left = new Node(18);

    prefixTraversal(root);
    // 1 5 15 10 6 18 12
    cout<<endl;
    postTraversal(root);
    // 15 10 5 18 12 6 1

    cout<<endl;
    infixTraversal(root);
    // 15 5 10 1 18 6 12
}