//
// Created by Ghassan on 4/25/2024.
//
#include <iostream>
#include "SingleList.hpp"

using namespace std;

template<class T>
SingleList<T>::SingleList(): size(0), head(nullptr), tail(nullptr) {
}


template<class T>
void SingleList<T>::insertAtHead(T element) {
    Node<T> *newNode;
    newNode = new Node<T>(element);
    if (!head) {
        head = newNode;
        tail = newNode;
    } else {
        newNode->next = head;
        head = newNode;
    }
    size++;
}

template<class T>
void SingleList<T>::insertAtTail(T element) {
    Node<T> *newNode;
    newNode = new Node<T>(element);
    if (!head) {
        head = newNode;
    }
    tail->next = newNode;
    tail = newNode;
    size++;
}

template<class T>
void SingleList<T>::removeAtHead() {
    Node<T> *newNode = head;
    head = head->next;
    delete newNode;
    size--;
}

template<class T>
void SingleList<T>::removeAtTail() {
    for (Node<T> *cur = head; cur; cur = cur->next) {
        if (cur->next == tail) {
            delete tail;
            tail = cur;
            tail->next = nullptr;
        }
    }
    size--;
}

template<class T>
bool SingleList<T>::isEmpty() const {
    return !size;
}

template<class T>
int SingleList<T>::linkedListSize() { return size; }

template<class T>
void SingleList<T>::clear() {
    while (head) {
        removeAtHead();
    }
    head = nullptr;
    size = 0;
}

template<class T>
void SingleList<T>::print() const {
    Node<T> *newNode = head;
    cout << '\n';
    while (newNode != nullptr) {
        cout << newNode->data << " ";
        newNode = newNode->next;
    }
    cout << '\n';
}

template<class T>
void SingleList<T>::replaceAt(T newElement, int index) {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index) cur->data = newElement;
    }
}

template<class T>
bool SingleList<T>::isExist(T element) {
    for (Node<T> *cur = head; cur; cur = cur->next) {
        if (cur->data == element) return true;
    }
    return false;
}

template<class T>
T SingleList<T>::retrieveAt(int index) const {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index)return cur->data;
    }
    return false;
}


template<class T>
bool SingleList<T>::isItemAtEqual(T element, int index) {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index) return (element == cur->data);
    }
    return false;
}

template<class T>
void SingleList<T>::removeAt(int index) {
    int cnt{0};
    if (!index) {
        removeAtHead();
        return;

    }
    if (index == size - 1) {
        removeAtTail();
        return;
    }
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index - 1) {
            Node<T> *temp = cur->next;
            cur->next = cur->next->next;
            delete temp;
            size--;
        }
    }
}

template<class T>
void SingleList<T>::insertAt(T element, int index) {
    int cnt{0};
    if (!head) {
        insertAtHead(element);
    } else if (size - 1 == index) {
        insertAtTail(element);
    } else {
        Node<T> *newNode = new Node(element);
        for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
            if (index - 1 == cnt) {
                Node<T> *temp = cur->next;
                newNode->next = temp;
                cur->next = newNode;
            }
        }
    }
}

template<class T>
void SingleList<T>::swap(int firstItemIdx, int secondItemIdx) {
    if (firstItemIdx == secondItemIdx) return;
    Node<T> *prev1 = nullptr, *cur1 = head;
    Node<T> *prev2 = nullptr, *cur2 = head;
    int idx = 0;

    while (cur1 && idx != firstItemIdx) {
        prev1 = cur1;
        cur1 = cur1->next;
        idx++;
    }

    idx = 0;
    while (cur2 && idx != secondItemIdx) {
        prev2 = cur2;
        cur2 = cur2->next;
        idx++;
    }
    if (!cur1 || !cur2) return;
    if (prev1) prev1->next = cur2;
    else head = cur2;
    if (prev2) prev2->next = cur1;
    else head = cur1;

    Node<T>* temp = cur1->next;
    cur1->next = cur2->next;
    cur2->next = temp;
}


template<class T>
ostream &operator<<(ostream &os, const SingleList<T> &list) {
    Node<T> *current = list.head;
    while (current != nullptr) {
        os << current->data << " ";
        current = current->next;
    }
    return os;
}

template<class T>
T SingleList<T>::operator[](int idx) {
    return retrieveAt(idx);
}


