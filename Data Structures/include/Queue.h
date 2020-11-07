#pragma once
#ifndef DATA_STRUCTURES_ALGORITHMS_QUEUE_H
#define DATA_STRUCTURES_ALGORITHMS_QUEUE_H

// include
#include <iostream>

class Queue {
private:
    int *arr;
    int capacity;
    int front;
    int rear;
    int currSize;

public:
    Queue(int);
    ~Queue();

    void enqueue(int);
    void dequeue();

    int peek();
    int size();

    bool isEmpty();
    bool isFull();
};


#endif //DATA_STRUCTURES_ALGORITHMS_QUEUE_H
