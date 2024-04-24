#include <iostream>
#include "Single-Linked-List.h"
#include "Single-Linked-List.cpp"

using namespace std;

int main() {
//    Node<int>* head;
//    Node<int> first(5);
//    head  = &first;
//    cout << first.data;
//    cout<<head->data<<"\n";
//    Node<int>* second = new Node(9);
//    first.next = second;
//    cout<<(first.next)->data;
//    Node<int>* third = new Node(6);
//    second->next = third;
//    cout<<first.next->next->data;
//    Node<int>* fourth = new Node(4);
//    third->next = fourth;
//    cout<<first.next->next->next->data;
//    Node<int>* fifth = new Node(4);
//    fourth->next = fifth;
//    cout<<first.next->next->next->next->data;
singleList<int> listaya;
//insert at head test
listaya.insertAtHead(5);
listaya.insertAtHead(9);
listaya.insertAtHead(6);
Node<int>* firstElement = listaya.head;
cout<<firstElement->data<<"\n";
cout<<firstElement->next->data<<"\n";
cout<<firstElement->next->next->data<<"\n";
cout<<"---------------------------------------------------\n";

//remove at head test
listaya.removeAtHead();
cout<<listaya.head->data<<"\n";
cout<<"---------------------------------------------------\n";

//is empty test
cout<<listaya.isEmpty()<<"\n";
singleList<int> list_tanya;
cout<<list_tanya.isEmpty()<<"\n";
cout<<"---------------------------------------------------\n";

//linked list size test
cout<<listaya.linkedListSize()<<"\n";
cout<<list_tanya.linkedListSize()<<"\n";
cout<<"---------------------------------------------------\n";


// insert at tail test
listaya.insertAtTail(7);
listaya.insertAtTail(8);


//print test
listaya.print();
cout<<"\n---------------------------------------------------\n";

// remove at tail test
listaya.removeAtTail();
listaya.print();
//clear test
listaya.clear();
cout<<listaya.isEmpty()<<"\n";
cout<<listaya.linkedListSize()<<"\n";
cout<<"---------------------------------------------------\n";
}


