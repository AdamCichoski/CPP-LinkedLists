#pragma once
#include "ListNode.hpp"
#include <iostream>

//Constructor
template <class T>
ListNode<T>:: ListNode(){
    this ->val = NULL;
    this -> next = NULL;
}
//Constructor 
template <class T>
ListNode<T>:: ListNode(T val){
    this ->val = val;
    this -> next = NULL;
}
//Constructor 
template <class T>
ListNode<T>:: ListNode(T val, ListNode<T> *next){
    this ->val = val;
    this -> next = next;
}

//Destructor
template <class T>
ListNode<T>:: ~ListNode(){
    delete this;
}