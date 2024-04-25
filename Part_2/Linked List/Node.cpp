//
// Created by Ghassan on 4/25/2024.
//

#include "Node.hpp"
template<class T>
Node<T>::Node(T val) : data(val), next(nullptr), prev(nullptr){
}