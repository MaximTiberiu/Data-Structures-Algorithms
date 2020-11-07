#pragma once
#ifndef DATA_STRUCTURES_ALGORITHMS_PRIORITYQUEUE_H
#define DATA_STRUCTURES_ALGORITHMS_PRIORITYQUEUE_H

// include
#include <iostream>

struct node {
    int priority;
    int data;
    node *link;
};

class PriorityQueue {
private:
    node *front;

public:
    PriorityQueue();

    void insert(int, int);
    void remove();
    void display();

};

#endif //DATA_STRUCTURES_ALGORITHMS_PRIORITYQUEUE_H
