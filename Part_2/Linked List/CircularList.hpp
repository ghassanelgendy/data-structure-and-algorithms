//
// Created by Ghassan on 4/25/2024.
//
#include "DoubleList.hpp"

#ifndef CS214_A1_CIRCULARLIST_HPP
#define CS214_A1_CIRCULARLIST_HPP

template <class T>
class CircularList : public SingleList<T>{
public:
    CircularList();
    void tailPointsToHead();
    void insertAtHead(T element) override;
    void print() const;
    void clear();

};



#endif //CS214_A1_CIRCULARLIST_HPP
