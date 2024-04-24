//
// Created by Ghassan on 4/24/2024.
//
#include <iostream>
#include "Single-Linked-List.h"
using namespace std;
template<class T>
singleList<T> :: singleList(): size(0), head(nullptr){
    cout<<"new list is created\n";
}
template<class T>
void singleList<T> :: insertAtHead(T element){
    Node<T>* newNode = new Node<T>(element);
    newNode->next = head;
    head = newNode;
    size++;
}
template<class T>

void singleList<T>::insertAtTail(T element){
    
};
template<class T>

void singleList<T>::insertAt(T element, int index){};
template<class T>

void singleList<T>::removeAtHead(){
    Node <T>* newNode = head;
    head = head->next;
    delete newNode;
    size--;
};
template<class T>

void singleList<T>::removeAtTail(){};
template<class T>

void singleList<T>::removeAt(int index){};
template<class T>

T singleList<T>::retrieveAt(int index){};
template<class T>

void singleList<T>::replaceAt(T newElement, int index){};
template<class T>

bool singleList<T>::isExist(T element){
    return true;
};
template<class T>

void singleList<T>::isItemAtEqual(T element, int index){};
template<class T>

void singleList<T>::swap(int firstItemIdx, int secondItemIdx){};    // swap tw nodes without swapping data.
template<class T>

bool singleList<T>:: isEmpty(){
     return !size;
};
template<class T>

int singleList<T>::linkedListSize(){return size;};
template<class T>

void singleList<T>::clear(){};
template<class T>

void singleList<T>::print(){

};
