#include <iostream>
#include "Single-Linked-List.h"
#include "Single-Linked-List.cpp"
#include "Double-Linked-List.cpp"
#include "stackArrayBased.cpp"
#include "stackLinkedListBased.cpp"


using namespace std;

int main() {
    //================================================================
    //==========================STACK LINKEDLIST BASED================
    cout << "\n=============[LINKEDLIST BASED STACK TEST]==============\n";
    stackLinked<int> stackLinkedInstance;
    stackLinkedInstance.Pop();
    stackLinkedInstance.push(5);
    stackLinkedInstance.push(6);
    stackLinkedInstance.push(55);
    stackLinkedInstance.push(25);
    stackLinkedInstance.print();
    cout << "number of elements in the stack: " << stackLinkedInstance.stackSize() << endl;
    stackLinkedInstance.Pop();
    stackLinkedInstance.push(65);
    stackLinkedInstance.print();
    int value;
    stackLinkedInstance.getTop(value);
    cout << "number of elements in the stack: " << stackLinkedInstance.stackSize() << endl;
    stackLinkedInstance.clear();
    //================================================================
    //========================ARRAY BASED STACK========================
    cout << "\n=============[ARRAY BASED STACK TEST]==============\n";
    stackArray<int> s;
    s.Pop();
    s.push(5);
    s.push(6);
    s.push(55);
    s.push(25);
    s.print();
    cout << "number of elements in the stack:" << s.stackSize() << endl;
    s.Pop();
    s.push(65);
    s.print();
    s.getTop(value);
    cout << "number of elements in the stack:" << s.stackSize();
    cout << endl;
    s.clear();
    //================================================================
    //========================SINGLE LINKED LIST======================
    cout << "\n=============[SINGLE LINKED LIST TEST]==============\n";

    singleList<int> list;
    cout << "\n-----------------Inserting to head------------------\n";
//insert at head test
    list.insertAtHead(5);
    list.insertAtHead(9);
    list.insertAtHead(6);
    list.print();
    cout << "\n---------------------Remove at head-----------------\n";
//remove at head test
    list.removeAtHead();
    list.print();

    cout << "\n-----------------------isEmpty----------------------\n";
//is empty test
    cout << list.isEmpty() << "\n";
    singleList<int> list_tanya;
    cout << list_tanya.isEmpty() << "\n";
    cout << "\n---------------------Size test----------------------\n";

//linked list size test
    cout << list.linkedListSize() << "\n";
    cout << list_tanya.linkedListSize() << "\n";
    cout << "\n--------------------insertAtTail--------------------\n";

// insert at tail test
    list.insertAtTail(7);
    list.insertAtTail(8);
    list.print();
    cout << "\n-----------------------print------------------------\n";

//print test
    list.print();
    cout << "\n----------------------removeAtTail------------------\n";

// remove at tail test
    list.removeAtTail();
    list.print();
    cout << "\n---------------------------isExist------------------\n";
    cout << list.isExist(6);
    cout << "\n---------------------------retrieveAt---------------\n";
    cout << list.retrieveAt(2);
    cout << "\n---------------------------retrieveAt---------------\n";
    cout << list.isItemAtEqual(7, 3);
    cout << "\n---------------------------removeAt-----------------\n";
    list.removeAt(2);
    list.print();
    cout << "\n---------------------------insertAt-----------------\n";
    list.insertAt(2, 2);
    list.print();
    cout << "\n---------------------------replaceAt----------------\n";
    list.replaceAt(1, 2);
    list.print();
    cout << "\n----------------------------swap--------------------\n";
    list.swap(1,2);    // swap tw nodes without swapping data.
    list.print();
    //================================================================
    //========================DOUBLE LINKED LIST======================
    cout << "\n=============[DOUBLE LINKED LIST TEST]==============\n";
    doubleList<int> doubleListaya;
    cout << "\n-----------------Inserting to head------------------\n";
//insert at head test
    doubleListaya.insertAtHead(5);
    doubleListaya.insertAtHead(9);
    doubleListaya.insertAtHead(6);
    doubleListaya.print();
    cout << "\n---------------------Remove at head-----------------\n";
//remove at head test
    doubleListaya.removeAtHead();
    doubleListaya.print();

    cout << "\n-----------------------isEmpty----------------------\n";
//is empty test
    cout << doubleListaya.isEmpty() << "\n";
    doubleList<int> doubleList_tanya;
    cout << doubleList_tanya.isEmpty() << "\n";
    cout << "\n---------------------Size test----------------------\n";

//linked doubleList size test
    cout << doubleListaya.linkedListSize() << "\n";
    cout << doubleList_tanya.linkedListSize() << "\n";
    cout << "\n--------------------insertAtTail--------------------\n";

// insert at tail test
    doubleListaya.insertAtTail(7);
    doubleListaya.insertAtTail(8);
    doubleListaya.print();
    cout << "\n-----------------------print------------------------\n";

//print test
    doubleListaya.print();
    cout << "\n----------------------removeAtTail------------------\n";

// remove at tail test
    doubleListaya.removeAtTail();
    doubleListaya.print();
    cout << "\n---------------------------isExist------------------\n";
    cout << doubleListaya.isExist(6);
    cout << "\n---------------------------retrieveAt---------------\n";
    cout << doubleListaya.retrieveAt(2);
    cout << "\n---------------------------retrieveAt---------------\n";
    cout << doubleListaya.isItemAtEqual(7, 3);
    cout << "\n---------------------------removeAt-----------------\n";
    doubleListaya.removeAt(2);
    doubleListaya.print();
    cout << "\n---------------------------insertAt-----------------\n";
    doubleListaya.insertAt(2, 2);
    doubleListaya.print();
    cout << "\n---------------------------replaceAt----------------\n";
    doubleListaya.replaceAt(1, 2);
    doubleListaya.print();
    cout << "\n----------------------------swap--------------------\n";
    doubleListaya.swap(1,2);    // swap tw nodes without swapping data.
    doubleListaya.print();
}