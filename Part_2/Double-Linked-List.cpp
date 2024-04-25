//
// Created by Ghassan on 4/24/2024.
//
#include <iostream>
#include "Single-Linked-List.h"

using namespace std;

template<class T>
doubleList<T>::doubleList(): size(0), head(nullptr), tail(nullptr) {
    cout << "new double linked list is created\n";
}

template<class T>
void doubleList<T>::insertAtHead(T element) {
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

void doubleList<T>::insertAtTail(T element) {
    Node<T> *newNode;
    newNode = new Node<T>(element);
    if (!head) {
        head = newNode;
    }
    newNode->prev = tail;
    tail->next = newNode;
    tail = newNode;
    tail->next = nullptr;
    size++;
};

template<class T>

void doubleList<T>::removeAtHead() {
    Node<T> *newNode = head;
    head = head->next;
    delete newNode;
    size--;
};

template<class T>

void doubleList<T>::removeAtTail() {
    for (Node<T> *cur = head; cur; cur = cur->next) {
        if (cur->next == tail) {
            delete tail;
            tail = cur;
            tail->next = nullptr;
        }
    }
    size--;
};

template<class T>
bool doubleList<T>::isEmpty() {
    return !size;
};

template<class T>

int doubleList<T>::linkedListSize() { return size; };

template<class T>

void doubleList<T>::clear() {
    while (head) {
        removeAtHead();
    }
    head = nullptr;
    size = 0;
};

template<class T>

void doubleList<T>::print() {
    Node<T> *newNode = head;
    cout << '\n';
    while (newNode != nullptr) {
        cout << newNode->data << " ";
        newNode = newNode->next;
    }
    cout << '\n';
};

template<class T>

void doubleList<T>::replaceAt(T newElement, int index) {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index) cur->data = newElement;
    }
};

template<class T>

bool doubleList<T>::isExist(T element) {
    for (Node<T> *cur = head; cur; cur = cur->next) {
        if (cur->data == element) return true;
    }
    return false;
};

template<class T>

T doubleList<T>::retrieveAt(int index) {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index)return cur->data;
    }
    return false;
};


template<class T>

bool doubleList<T>::isItemAtEqual(T element, int index) {
    int cnt{0};
    for (Node<T> *cur = head; cur; cur = cur->next, cnt++) {
        if (cnt == index) return (element == cur->data);
    }
    return false;
};

template<class T>

void doubleList<T>::removeAt(int index) {
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
};

template<class T>

void doubleList<T>::insertAt(T element, int index) {
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
};

template<class T>
void doubleList<T>::swap(int firstItemIdx, int secondItemIdx) {
    int cnt1{0}, cnt2{0};
    Node<T> *firstNode;
    Node<T> *secondNode;
    for (Node<T> *cur = head; cur; cur = cur->next, cnt1++, cnt2++) {
        if (firstItemIdx == cnt1) {
            firstNode = cur;
        }
        if (secondItemIdx == cnt2) {
            secondNode = cur;
        }
    }
    std::swap(firstNode,secondNode);
};
