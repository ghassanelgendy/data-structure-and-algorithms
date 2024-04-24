//
// Created by Ghassan on 4/24/2024.
//

#ifndef CS214_A1_SINGLE_LINKED_LIST_H
#define CS214_A1_SINGLE_LINKED_LIST_H
template <class T>
class Node {

public:
    int data;
    Node *next;
    Node(T val) : data(val), next(nullptr){
    }
};

template <class T>
class singleList{
private:
    Node<T> *head;
    int size;
public:
    singleList();
    void insertAtHead(T element);

    void insertAtTail(T element);

    void insertAt(T element, int index);

    void removeAtHead();

    void removeAtTail();

    void removeAt(int index);

    T retrieveAt(int index);

    void replaceAt(T newElement, int index);

    bool isExist(T element);

    void isItemAtEqual(T element, int index);

    void swap(int firstItemIdx, int secondItemIdx);    // swap tw nodes without swapping data.

    bool isEmpty();

    int linkedListSize();

    void clear();

    void print();
};

#endif //CS214_A1_SINGLE_LINKED_LIST_H
