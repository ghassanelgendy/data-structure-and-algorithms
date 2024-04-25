#include <iostream>
using namespace std;
template <typename T>
class Queue{
private:
    struct Node {
        T data;
        Node* next{};
        Node(T data) : data(data) {}
    };
    Node* head{};
    Node* tail{};
    int length = 0;
    int size = 0;

public:
    Queue(): size(10000) {};

    Queue(int size) :size(size) {};

    ~Queue() {
        while (head) {
            Node* temp = head;
            head = head->next;      //beyshawer 3al node ely wara w yefdal yemsah
            delete temp;
        }
    }

    void enqueue(T value) {
        Node* item = new Node(value);
        if (!head) {        //law lesa mafesh head
            head = tail = item;
            length++;
        }
        else if(isFull()){
            cout<< "The Queue is Full\n";
        }
        else{
            tail->next = item;
            tail = item;
            length++;
        }
    }

    T dequeue() {
        if (!isEmpty()) {
            T value = head->data;
            Node* temp = head;
            head = head->next;
            delete temp; // Free memory
            length--;
            if (!head) {
                tail = nullptr; // law el head fady then el tail mafrood yekoon fady
            }
            return value;
        } else {
            tail = nullptr;
            cout << "The Queue is Empty\n";
            return T();
        }
    }

    T first(){
        if (!isEmpty()) {
            return head->data;
        }
        else{
            cout<<"The Queue is Empty\n";
            return T();
        }
    }

    bool isEmpty(){
        return length == 0;
    }
    bool isFull(){
        return length == size;
    }
    int queueSize(){
        return length;
    }
    void clear() {
        while (head) {
            Node* temp = head;
            head = head->next;
            delete temp;
        }
        tail = nullptr;
        length = 0;
        cout << "Queue is Cleared\n";
    }
    void print() {
        if(length!=0){
            for (Node* cur = head; cur; cur = cur->next){
                cout << cur->data << " ";
            }
        }
        else{
            cout << "Queue is Empty";
        }
        cout << "\n";
    }
};

int main(){

    Queue<int> queue(10);
    queue.enqueue(1);
    queue.enqueue(2);
    queue.enqueue(3);
    cout<< queue.queueSize() << endl;
    queue.print();
    cout << "First element: " << queue.first() << "\n";
    cout << "Dequeued: " << queue.dequeue() << "\n";
    queue.print();
    cout << "Queue size: " << queue.queueSize() << "\n";
    queue.clear();
    queue.print();

    cout<< "\n======================================================================\n";


    Queue <string> queuename;
    cout << "Queue size: " << queuename.queueSize() << endl;
    queuename.enqueue("Jana");
    queuename.enqueue("Mohamed");
    queuename.enqueue("Ramadan");
    queuename.enqueue("Mahmoud");
    cout << "Queue size: " << queuename.queueSize() << endl;
    cout << "Dequeued: " << queuename.dequeue() << endl;
    queuename.enqueue("Mohamed");
    cout << "Dequeued: " << queuename.dequeue() << endl;
    queuename.print();
    cout << "First element: " << queuename.first() << endl;
    queuename.clear();
    queuename.print();
    queuename.enqueue("Jana");
    queuename.print();
    queuename.clear();
    queuename.dequeue();
    queuename.print();

    cout<< "\n======================================================================\n";

    Queue<int> queuelist;
    queuelist.enqueue(1);
    queuelist.enqueue(2);
    queuelist.enqueue(3);
    cout << "Queue size before clearing: " << queuelist.queueSize() << endl;
    queuelist.clear();
    cout << "Queue size after clearing: " << queuelist.queueSize() << endl;

    cout<< "\n======================================================================\n";


    Queue<int> queuetest(3);
    queuetest.enqueue(1);
    queuetest.enqueue(2);
    queuetest.enqueue(3);
    queuetest.enqueue(4); //queuetest is Full
    queuetest.clear();

    return 0;
}












