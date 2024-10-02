#include <iostream>
using namespace std;

class Stack {
public:
    int arr[100];
    int top;

    Stack() {
        top = -1;
    }

    void push(int x) {
        if (top == 99) {
            cout << "Stack overflow" << endl;
            return;
        }
        arr[++top] = x;
        cout << x << " pushed onto stack" << endl;
    }

    void pop() {
        if (top < 0) {
            cout << "Stack underflow" << endl;
            return;
        }
        cout << arr[top--] << " popped from stack" << endl;
    }
    
    int peek() {
        if (top < 0) {
            cout << "Stack is empty" << endl;
            return -1;
        }
        cout << "Top element is: " << arr[top] << endl;
        return arr[top];
    }
};

int main() {
    Stack s;
    s.push(10);
    s.push(20);
    s.push(30);
    
    s.peek(); // Should output 30
    
    s.pop(); // Pops 30
    s.peek(); // Should output 20
    
    s.pop(); // Pops 20
    s.peek(); // Should output 10
    
    s.pop(); // Pops 10
    s.peek(); // Should indicate the stack is empty
    
    s.pop(); // Tries to pop from an empty stack

    return 0;
}
