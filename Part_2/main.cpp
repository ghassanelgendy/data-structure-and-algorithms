#include <iostream>
#include "Single-Linked-List.h"
#include "Single-Linked-List.cpp"

using namespace std;

int main() {
    singleList<int> list;
    cout << "\n---------------------------Inserting to head-------------------\n";
//insert at head test
    list.insertAtHead(5);
    list.insertAtHead(9);
    list.insertAtHead(6);
    cout << "\n----------------------------Remove at head-----------------------\n";
//remove at head test
    list.removeAtHead();
    cout << "\n-----------------------isEmpty----------------------------\n";
//is empty test
    cout << list.isEmpty() << "\n";
    singleList<int> list_tanya;
    cout << list_tanya.isEmpty() << "\n";
    cout << "\n-----------------------Size test----------------------------\n";

//linked list size test
    cout << list.linkedListSize() << "\n";
    cout << list_tanya.linkedListSize() << "\n";
    cout << "\n-----------------------insertAtTail----------------------------\n";

// insert at tail test
    list.insertAtTail(7);
    list.insertAtTail(8);
    list.print();
    cout << "\n-----------------------print----------------------------\n";

//print test
    list.print();
    cout << "\n----------------------removeAtTail---------------------------\n";

// remove at tail test
    list.removeAtTail();
    list.print();
    cout << "\n---------------------------isExist-------------------\n";
    cout << list.isExist(6);
    cout << "\n---------------------------retrieveAt-------------------\n";
    cout << list.retrieveAt(2);
    cout << "\n---------------------------retrieveAt-------------------\n";
    cout << list.isItemAtEqual(7, 3);
    cout << "\n---------------------------removeAt-------------------\n";
    list.insertAtHead(99);

    list.insertAtHead(3);
    cout << "\n---------------------------currentValue-------------------\n";
    list.print();

    cout << "\n---------------------------insertAt-------------------\n";
    list.insertAt(2,2);

    list.print();

}