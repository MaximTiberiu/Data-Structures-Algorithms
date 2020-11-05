#pragma once
#ifndef DATA_STRUCTURES_ALGORITHMS_STACK_H
#define DATA_STRUCTURES_ALGORITHMS_STACK_H

// include
#include <iostream>

class Stack {
private:
    int *st;
    int top, capacity;

public:
    // constructor & destructor
    Stack(int size = 0);
    ~Stack();

    // basics
    void push(int);
    void pop();
    int peek();

    // number of elements
    int size();

    // empty stack
    bool isEmpty();

    // full stuck
    bool isFull();

    // displaying the stack
    void display();
};


#endif //DATA_STRUCTURES_ALGORITHMS_STACK_H
