//
// Created by Ghassan on 4/24/2024.
//

#ifndef CS214_A1_SINGLE_LINKED_LIST_H
#define CS214_A1_SINGLE_LINKED_LIST_H
//NODE
template <class T>
class Node {
public:
    int data;
    Node *next;
    Node *prev;
    Node(T val);
};

template<class T>
Node<T>::Node(T val) : data(val), next(nullptr), prev(nullptr){
}
//SINGLE
template <class T>
class singleList{
private:
    int size;
    Node<T> *head;
    Node<T> *tail;
public:
    singleList();
    void insertAtHead(T element) ;

    void insertAtTail(T element);

    void insertAt(T element, int index);

    void removeAtHead();

    void removeAtTail();

    void removeAt(int index);

    T retrieveAt(int index);

    void replaceAt(T newElement, int index);

    bool isExist(T element);

    bool isItemAtEqual(T element, int index);

    void swap(int firstItemIdx, int secondItemIdx);    // swap tw nodes without swapping data.

    bool isEmpty();

    int linkedListSize();

    void clear();

    void print();


};
//DOUBLE
template <class T>
class doubleList{
private:
    int size;

    Node<T> *tail;
public:
    Node<T> *head;
    doubleList();

    void insertAtHead(T element) ;

    void insertAtTail(T element);

    void insertAt(T element, int index);

    void removeAtHead();

    void removeAtTail();

    void removeAt(int index);

    T retrieveAt(int index);

    void replaceAt(T newElement, int index);

    bool isExist(T element);

    bool isItemAtEqual(T element, int index);

    void swap(int firstItemIdx, int secondItemIdx);    // swap tw nodes without swapping data.

    bool isEmpty();

    int linkedListSize();

    void clear();

    void print();


};
//CIRCLE
template <class T>
class circularList{
private:
    int size;
    Node<T> *head;
    Node<T> *tail;
public:
    circularList();

    void insertAtHead(T element) ;

    void insertAtTail(T element);

    void insertAt(T element, int index);

    void removeAtHead();

    void removeAtTail();

    void removeAt(int index);

    T retrieveAt(int index);

    void replaceAt(T newElement, int index);

    bool isExist(T element);

    bool isItemAtEqual(T element, int index);

    void swap(int firstItemIdx, int secondItemIdx);    // swap tw nodes without swapping data.

    bool isEmpty();

    int linkedListSize();

    void clear();

    void print();


};
#endif //CS214_A1_SINGLE_LINKED_LIST_H
