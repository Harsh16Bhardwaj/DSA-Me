#include <iostream>
using namespace std;

class TreeNode {
public:
    int data;
    TreeNode* left;
    TreeNode* right;

    // Constructor
    TreeNode(int val) : data(val), left(nullptr), right(nullptr) {}
};


class BinaryTree {
private:
    TreeNode* root;

public:
    // Constructor
    BinaryTree() : root(nullptr) {}

    // Method to insert a new node
    void insert(int val) {
        root = insertRec(root, val);
    }

    // Inorder Traversal
    void inorder() {
        inorderRec(root);
        cout << endl;
    }

    void remove(int val) { 
        root = removeRec(root, val);
    }

    TreeNode* removeRec(TreeNode* node, int val) { 
        if (node == nullptr) { 
            return node; 
            } 
        else if (val < node->data) { 
            node->left = removeRec(node->left, val); } 
        else if (val > node->data) { 
            node->right = removeRec(node->right, val); } 
        else { if (node->left == nullptr) { 
            TreeNode* temp = node->right;
            delete node; 
            return temp; 
            } 
        else if (node->right == nullptr) { 
            TreeNode* temp = node->left; 
            delete node; return temp; } 
        TreeNode* temp = minValueNode(node->right); 
        node->data = temp->data; 
        node->right = removeRec(node->right, temp->data); } 
        return node;
    }
    TreeNode* insertRec(TreeNode* node, int val) {
        if (node == nullptr) {
            return new TreeNode(val);
        }
        if (val < node->data) {
            node->left = insertRec(node->left, val);
        } else if (val > node->data) {
            node->right = insertRec(node->right, val);
        }
        return node;
    }

    // Helper method for inorder traversal
    void inorderRec(TreeNode* node) {
        if (node != nullptr) {
            inorderRec(node->left);
            cout << node->data << " ";
            inorderRec(node->right);
        }
    }
};


int main() {
    BinaryTree tree;
    tree.insert(50);
    tree.insert(30);
    tree.insert(20);
    tree.insert(40);
    tree.insert(70);
    tree.insert(60);
    tree.insert(80);

    cout << "Inorder traversal: ";
    tree.inorder();

    return 0;
}
