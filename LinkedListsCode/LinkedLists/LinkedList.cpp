#pragma once
#include "LinkedList.h"
#include <iostream>


template <class T>
LinkedList<T>:: LinkedList(){
    this->head = NULL;
    this->tail = NULL;
}

template <class T>
LinkedList<T>::LinkedList(T val){ 
    this->head = new ListNode<T>(val); 
    this->tail = this->head; 
}

template <class T>
LinkedList<T>::LinkedList(T val, ListNode<T>* node){
    this->head = new ListNode<T>(val);
    this->tail = node;
}

template <class T>
LinkedList<T>::~LinkedList(){
    delete head;
}

template <class T>
T LinkedList<T>:: getHead(){
    return this->head->val;
}

template <class T>
void LinkedList<T>:: add(T val){
    this->tail->next = new ListNode<T>(val);
    this->tail = this->tail->next;
}

template <class T>
void LinkedList<T>:: remove(T val){
    ListNode<T>* temp = this-> head;
    while(temp!=NULL){
        if (temp->val == val){
            delete temp;
            break;
        }

    }
}
template <class T>
void LinkedList<T>:: printList(){
    ListNode<T>* temp = this-> head;
    while(temp!= NULL){
        printf("%d\n", temp->val);
        temp = temp->next;
    }
}

template <class T>
std::string LinkedList<T>:: toString(){
    std::string str= "LinkedList: [";
    ListNode<T>* temp = this-> head;
    while(temp!= NULL){
        if (temp->next == NULL){
            str += std::to_string(temp->val)+"]";
        }
        else{
           str += std::to_string(temp->val) + ", ";
        }
        temp = temp->next; 
    }
    return str;
}