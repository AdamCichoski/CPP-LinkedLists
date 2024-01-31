#include <stdio.h>
#include <iostream>
#include "LinkedList.hpp"


void foo();

int main(int argc, char *argv[]){
    LinkedList<int> *list = new LinkedList<int>(17);
    list->add(10);
    list->add(20);
    
    println(list->toString());

    
    return 0;
}

void foo(){
    LinkedList<int> *t = new LinkedList<int>();

    delete t;
}