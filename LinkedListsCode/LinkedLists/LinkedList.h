#pragma once
#include "ListNode.h"
#include <iostream>

#define print(x) (std::cout << x)
#define println(x) (std::cout << x << std::endl << std::endl)
/**
 * LinkedList class is a singly-linked list. This holds the ability to add items from the list
 * without needing to allocate any extra unused space in memory. 
 * @author Adam Cichoski
*/
template <class T>
class LinkedList {
    public:
    ListNode<T>* head;
    ListNode<T>* tail;
    LinkedList();
    LinkedList(T val);
    LinkedList(T val, ListNode<T>* node);
    /**
     * Destructor for the LinkedList class.
    */
    ~LinkedList();
    T getHead();
    void add(T val);
    void remove(T val);
    void printList();
    std::string toString();
};

#include "LinkedList.cpp"

