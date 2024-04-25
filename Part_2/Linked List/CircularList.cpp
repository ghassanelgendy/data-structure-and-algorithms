//
// Created by Ghassan on 4/25/2024.
//

#include "CircularList.hpp"

template<class T>
CircularList<T>::CircularList():SingleList<T>() {
}

template<class T>
void CircularList<T>::tailPointsToHead() {
    this->tail->next = this->head;
}

template<class T>
void CircularList<T>::insertAtHead(T element) {
    SingleList<T>::insertAtHead(element);
    tailPointsToHead();
}

template<class T>
void CircularList<T>::print() const {
    int cnt{0};
    Node<T> *newNode = this->head;
    cout << '\n';
    while (newNode != nullptr && cnt < this->size) {
        cnt++;
        cout << newNode->data << " ";
        newNode = newNode->next;
    }
    cout << '\n';
}

template<class T>
void CircularList<T>::clear() {
    int cnt = this->size;
    while (this->head && cnt) {
        SingleList<T>::removeAtHead();
        cnt--;
    }
    this->head = nullptr;
    this->size = 0;
}