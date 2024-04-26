//
// Created by Ghassan on 4/25/2024.
//
#include <iostream>
#include "DoubleList.hpp"

using namespace std;

template<class T>
DoubleList<T>::DoubleList() : SingleList<T>() {
}

template<class T>
void DoubleList<T>::insertAtHead(T element) {
    Node<T> *newNode;
    newNode = new Node<T>(element);
    if (!this->head) {
        this->head = newNode;
        this->tail = newNode;
    } else {
        this->head->prev = newNode;
        newNode->next = this->head;
        this->head = newNode;
    }
    this->size++;
}

template<class T>
void DoubleList<T>::insertAtTail(T element) {
    Node<T> *newNode;
    newNode = new Node<T>(element);
    if (!this->head) {
        this->head = newNode;
    }
    newNode->prev = this->tail;
    this->tail->next = newNode;
    this->tail = newNode;
    this->tail->next = nullptr;
    this->size++;
}

template<class T>
void DoubleList<T>::removeAtHead() {
    SingleList<T>::removeAtHead();
    this->head->prev = nullptr;
}

template<class T>
void DoubleList<T>::insertAt(T element, int index) {
    int cnt{0};
    if (!this->head) {
        insertAtHead(element);
    } else if (this->size - 1 == index) {
        insertAtTail(element);
    } else {
        Node<T> *newNode = new Node(element);
        for (Node<T> *cur = this->head; cur; cur = cur->next, cnt++) {
            if (index - 1 == cnt) {
                Node<T> *temp = cur->next; //index eladem
                newNode->next = temp; //eladem odam elgded
                newNode->prev = cur; //abl elgdeed index-1
                newNode->next->prev = newNode;
                cur->next = newNode;
            }
        }
    }
    this->size++;
}

template<class T>
void DoubleList<T>::reversePrint() {
    Node<T> *currentNode = this->tail; // Start from the tail of the list
    cout << '\n';
    while (currentNode != nullptr) {
        cout << currentNode->data << " ";
        currentNode = currentNode->prev; // Move to the previous node
    }
    cout << '\n';
}

template<class T>
void DoubleList<T>::removeAt(int index) {
    int cnt{0};
    if (!index) {
        removeAtHead();
        return;

    }
    if (index == this->size - 1) {
        SingleList<T>::removeAtTail();
        return;
    }
    for (Node<T> *cur = this->head; cur; cur = cur->next, cnt++) {
        if (cnt == index - 1) {
            Node<T> *temp = cur->next;
            temp->next->prev = cur;
            cur->next = cur->next->next;
            delete temp;
            this->size--;
        }
    }
}

template<class T>
void DoubleList<T>::swap(int firstItemIdx, int secondItemIdx) {
    if (firstItemIdx == secondItemIdx) return;
    Node<T> *cur1 = this->head;
    Node<T> *cur2 = this->head;
    int idx = 0;

    while (cur1 && idx != firstItemIdx) {
        cur1 = cur1->next;
        idx++;
    }

    idx = 0;
    while (cur2 && idx != secondItemIdx) {
        cur2 = cur2->next;
        idx++;
    }

    if (!cur1 || !cur2) return;

    if (cur1->prev) cur1->prev->next = cur2;
    else this->head = cur2;
    if (cur2->prev) cur2->prev->next = cur1;
    else this->head = cur1;

    if (cur1->next) cur1->next->prev = cur2;
    if (cur2->next) cur2->next->prev = cur1;

    Node<T>* tempPrev = cur1->prev;
    Node<T>* tempNext = cur1->next;
    cur1->prev = cur2->prev;
    cur1->next = cur2->next;
    cur2->prev = tempPrev;
    cur2->next = tempNext;
}
