#include <iostream>
using namespace std;

const int MAX_SIZE = 100;

template <typename T>
class stackArray {
private:
    int top;
    T item[MAX_SIZE];

public:
    stackArray() {
        top = -1; //3hsna lma agy a3ml +1 yekon bade2 mn zero
    }

    void push(T Element) {
        if (top >= MAX_SIZE - 1) {
            cout << "stack is full can't add more elements"<<endl;
        } else {
            top++;
            item[top] = Element;
        }
    }

    bool isEmpty() {
        if(top== -1) //-1 da met3rf mn el awl fa m3naha en mafesh haga haslha push
            return true;
        else
            return false;

    }


   T Pop() { // Return top element and pop it
        if (isEmpty()) {
            cout << "stack is empty YOU DID NOT ADD VALUES !!"<<endl;
            return T(); // Return default value if stack is empty
        } else {
            T Element = item[top];
            top--;
            return Element;
        }
    }

    void getTop(T &stackTop) {
        if (isEmpty()) {
            cout << "stack is empty YOU DID NOT ADD VALUES !!"<<endl;
        } else {
            stackTop = item[top];
            cout << "Top of stack: " << stackTop << endl;
        }
    }


    void print() {
        cout << "[";
        for (int i = top; i >= 0; --i) { // reversed 3shan ttb3 mn eli dakhelha akher haga ll awal
            cout << item[i] << " ";
        }
        cout << "]" << endl;
    }
    void clear() {
        top = -1; // Reset top
        cout << "Stack is cleared" << endl;
    }
    int stackSize() {
        return top + 1; //+1 3shan howa 0 based
    }

};
