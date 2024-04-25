//
// Created by Ghassan on 4/25/2024.
//

#ifndef CS214_A1_NODE_HPP
#define CS214_A1_NODE_HPP

template <class T>
class Node {
public:
    T data;
    Node *next;
    Node *prev;
    Node(T val);
};

#endif //CS214_A1_NODE_HPP
