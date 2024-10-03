#include<iostream>
using namespace std;

/*
    Height Diff bw left subtree and right subtree = {-1,0,1} => Balance Factor
    After every insertion Balance Factor is to be checked
*/

class Node {
    public:
        int data;
        Node* next;
        Node(int data) {
            this->data = data;
            this->next = nullptr;
        }
};