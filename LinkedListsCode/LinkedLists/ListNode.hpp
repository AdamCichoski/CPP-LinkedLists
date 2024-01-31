#pragma once
#include <iostream>


template <class T>
class ListNode{
    public:
    T val;
    ListNode<T>* next;
    ListNode(T);
    ListNode(T val, ListNode<T> *next);
    ListNode();
    ~ListNode();
};

#include "ListNode.cpp"