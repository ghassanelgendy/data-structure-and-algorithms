#include <iostream>
using namespace std;

template <typename T>
class stack {
private:
    struct Node {
        T data;
        Node* next;
    };

    Node* top; // byshawer 3la el top of the stack

public:
    stack() {
        top = nullptr; // Initialize top to nullptr (empty stack)
    }

    void push(T Element) {
        Node* newNode = new Node;
        newNode->data = Element;
        newNode->next = top;
        top = newNode;
    }

    bool isEmpty() {
        return top == nullptr; // Stack is empty if top is nullptr
    }

    T Pop() {
        if (isEmpty()) {
            cout << "stack is empty YOU DID NOT ADD VALUES !!" << endl;
            return T(); // Return default value if stack is empty
        } else {
            T Element = top->data; // Get data from the top node
            Node* temp = top;       // Store top in a temporary pointer
            top = top->next;        // Move top to the next node
            delete temp;            // Delete the old top node
            return Element;
        }
    }

    void getTop(T &stackTop) {
        if (isEmpty()) {
            cout << "stack is empty YOU DID NOT ADD VALUES !!" << endl;
        } else {
            stackTop = top->data; // Get data from the top node
            cout << "Top of stack: " << stackTop << endl;
        }
    }

    void print() {
        cout << "[";
        Node* current = top; // Start from the top node
        while (current != nullptr) {
            cout << current->data << " ";
            current = current->next; // Move to the next node
        }
        cout << "]" << endl;
    }

    void clear() {
        while (top != nullptr) { // nafs fekret el pop bas hy-loop lhd ma top ykon b null
            Node* temp = top;
            top = top->next;
            delete temp;
        }
        cout << "Stack is cleared" << endl;
    }

    int stackSize() {
        int ctr = 0;
        Node* current = top;
        while (current != nullptr) { // talama msh null zawad el ctr
            ctr++;
            current = current->next;
        }
        return ctr;
    }
};

int main() {
    stack<int> s;
    s.Pop();
    s.push(5);
    s.push(6);
    s.push(55);
    s.push(25);
    s.print();
    cout << "number of elements in the stack: " << s.stackSize() << endl;
    s.Pop();
    s.push(65);
    s.print();
    int value;
    s.getTop(value);
    cout << "number of elements in the stack: " << s.stackSize() << endl;
    s.clear();
    s.push(5);
    s.print();

    return 0;
}
