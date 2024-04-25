//
// Created by Ghassan on 4/25/2024.
//
#include "SingleList.hpp"

#ifndef CS214_A1_DOUBLELIST_HPP
#define CS214_A1_DOUBLELIST_HPP

template<class T>
class DoubleList : public SingleList<T> {
public:
    DoubleList();

    void insertAtHead(T element) override;

    void insertAtTail(T element) override;

    void insertAt(T element, int index) override;

    void removeAtHead() override;

    void reversePrint();

    void removeAt(int index) override;
};


#endif //CS214_A1_DOUBLELIST_HPP
