/*A linked list is a linear data structure that consists of a series of nodes connected by pointers (in C or C++) or references (in Java, Python and JavaScript).*/

//Important Points: 

    //1. Each node contains data and a reference (or pointer) to the next node.
    //2. The first node is called the head node, and the last node is called the tail node.
    //3. Linked lists can be singly linked or doubly linked (each node points to the next and previous nodes).
    //4. They efficient for insertion, deletion, and searching operations as they provide constant time complexity (O(1)) for these.
    //5. However, linked lists are not efficient for random access as they require traversing the list to find a specific node.
    //6. They are useful when memory efficiency is a concern, as they do not require contiguous memory allocation for storing data.
    //7. They also useful when the order of elements is not important, as they can easily be inserted or deleted at any position.
    //8. Linked lists are not suitable for data that requires frequent updates or sorting.

//Node Structure:
    //1. Data
    //2. Next pointer (or reference) to the next node in the linked list
    //3. Head- First node, Tail- End node

//Types:
    //1. Singly Linked List
    //2. Doubly Linked List
    //3. Circular Singly Linked List
    //4. Circular Doubly Linked List

//Operations:
    //1. Insertion at the beginning - O(1)	    
    //2. Insertion at the end - O(n)
    //3. Insertion at a specific position- O(n)
    //4. Deletion at the beginning - O(1)
    //5. Deletion at the end - O(n)
    //6. Deletion at a specific position - O(n)
    //7. Search for a node - O(n)
    /*Auxilary space for all is O(1)*/

//Advantages:
    //1. Dynamic size - Linked lists can grow or shrink as needed without needing to allocate additional memory.
    //2. Efficient memory management - Unlike arrays, linked lists do not require contiguous memory allocation for storing data.
    //3. Flexibility - Linked lists can easily be inserted or deleted at any position, making them suitable for various applications.
    //4. Flexible data structure - Linked lists can store a wide range of data types, including integers, strings, and objects.

//Disadvantages:
    //1. Slower access to elements - Linked lists require traversing the list to find a specific node, which can be slower than arrays.
    //2. Memory overhead - Each node in a linked list requires additional memory for storing the data and the next pointer.
    //3. Increased memory usage - Linked lists can consume more memory than arrays for storing the same amount of data.
    //4. Difficulty in sorting and merging 



#include <iostream>
using namespace std;

// Define the Node class
class Node {
public:                             //Public access specifier
    int data;
    Node* next;                     //Pointer to the next node

    
    Node(int data) {                // Constructor for Node
        this->data = data;          // this-> is a pointer to the non static member introduced to avoid the conflict of data= data in this case
        this->next = nullptr;       //Defining the tail
    }
};

void traverseLinkedList(Node* head)   //head Position is provided
{
    Node* current = head;                   // Start from the head of the linked list
    while (current != NULL) {               // Traverse the linked list until reaching the end
        cout << current->data << " ";       // Print the data of the current node 
        current = current->next;            // Move to the next node
    }
    cout << endl;
}

int main() {
    // Create a Node object
    Node* node = new Node(10);
    return 0;
}
