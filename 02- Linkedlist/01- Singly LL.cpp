#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = nullptr;
    }
};

// Function to traverse the linked list
int traverseLL(Node* head) {
    Node* current = head;
    int count = 0;
    while (current != nullptr) {
        cout << current->data << " " << endl;
        current = current->next;  // Move to the next node
        count++;
    }
    return count;
}

// Function to append a node at a specific position
Node* appendLL(int data, int position, Node* head) {
    int length = traverseLL(head);  // Get the current length of the list
    
    // For insertion at the beginning
    if (position == 0) {
        Node* newNode = new Node(data);
        newNode->next = head;
        head = newNode;
        return head;
    }
    // For insertion at the end
    else if (position == length) {
        Node* newNode = new Node(data);
        Node* current = head;
        while (current->next != nullptr) {
            current = current->next;
        }
        current->next = newNode;
        return head;
    }
    // For insertion in the middle
    else {
        Node* current = head;
        Node* newNode = new Node(data);
        int i = 0;

        while (i != position - 1) {  // Traverse to the node before the insertion point
            current = current->next;
            i++;
        }

        newNode->next = current->next;  // Link newNode's next to the current node's next
        current->next = newNode;  // Link current node's next to the newNode
        return head;
    }
}

// Function to delete a node at a specific position
Node* deletionLL(int position, Node* head) {
    int length = traverseLL(head);  // Get the current length of the list

    if (head == nullptr) {
        return nullptr;  // If the list is empty, nothing to delete
    }

    Node* current = head;

    // Deletion at the beginning
    if (position == 0) {
        Node* temp = head;
        head = head->next;  // Move the head to the next node
        delete temp;        // Free memory of the deleted node
        return head;
    }

    // Deletion at the end
    else if (position == length - 1) {
        Node* current = head;
        // Traverse to the second-last node
        while (current->next->next != nullptr) {
            current = current->next;
        }
        // Delete the last node
        Node* temp = current->next;
        current->next = nullptr;
        delete temp;
        return head;
    }

    // Deletion in the middle
    else {
        Node* current = head;
        int i = 0;
        // Traverse to the node before the one to delete
        while (i != position - 1) {
            current = current->next;
            i++;
        }

        // Perform the deletion
        Node* temp = current->next;  // The node to delete
        current->next = temp->next;  // Link to the next node
        delete temp;                 // Free the memory
        return head;
    }
}

Node* reverseLL_iterative(Node* &head) {
    // 3 Pointer Solution
    Node* prev = nullptr;
    Node* current = head;
    Node* next = head->next; //

    while(next != nullptr){
        next = current->next;
        current->next = prev; // Reverse the link
        prev = current;
        current = next;
    }
    head = prev; // Make the last node as the new head
    return head; //
}

Node* reverseLL_recurrsive(Node* &head) {
    if(head == nullptr || head->next == nullptr)
    {
        return head;
    }

    Node* newhead = reverseLL_recurrsive(head->next );
    head->next->next = head; // Reverse the link
    head->next = nullptr;

    return newhead;  // Return the new head of the reversed list
}

int main() {
    int choice;
    Node* head = new Node(10);  // Initialize the list with one node

    while (true) {
        cout << "Append to the list: 1" << endl;
        cout << "Print the list: 2" << endl;
        cout << "Delete a node: 3" << endl;
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1: {
                int data, posi;
                cout << "Enter the data: ";
                cin >> data;
                cout << "Enter the position: ";
                cin >> posi;
                head = appendLL(data, posi, head);
                break;
            }
            case 2: {
                traverseLL(head);
                break;
            }
            case 3: {
                int posi;
                cout << "Enter the position to delete: ";
                cin >> posi;
                head = deletionLL(posi, head);
                break;
            }
            default: {
                cout << "Invalid choice, try again!" << endl;
            }
        }
    }

    return 0;
}
