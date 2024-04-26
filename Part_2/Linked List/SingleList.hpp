//
// Created by Ghassan on 4/25/2024.
//
#include <iostream>
#include "Node.hpp"

using namespace std;

#ifndef CS214_A1_SINGLELIST_H
#define CS214_A1_SINGLELIST_H

//SINGLE
template<class T>
class SingleList {
protected:
    int size;
    Node<T> *head;
    Node<T> *tail;
public:
    SingleList();

    virtual void insertAtHead(T element);

    virtual void insertAtTail(T element);

    virtual void insertAt(T element, int index);

    virtual void removeAtHead();

    void removeAtTail();

    virtual void removeAt(int index);

    T retrieveAt(int index) const;

    void replaceAt(T newElement, int index);

    bool isExist(T element);

    bool isItemAtEqual(T element, int index);

    virtual   void swap(int firstItemIdx, int secondItemIdx);    // swap tw nodes without swapping data.

    bool isEmpty() const;

    int linkedListSize();

    void clear();

    void print() const;

    //overloaded operators
    template<class U>
    friend std::ostream &operator<<(std::ostream &os, const SingleList<U> &list);

    T operator[](int idx);
};

#endif //CS214_A1_SINGLELIST_H
