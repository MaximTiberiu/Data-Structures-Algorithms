#pragma once
#ifndef DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
#define DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H

// include
#include <iostream>

struct node {
    int data;
    node *next;
};

class linkedList {
private:
    node *head, *tail;

public:
    // constructor
    linkedList();
    ~linkedList();

    // creating a new node
    void createNode(int);

    // displaying the list
    void display();


    // insertions
    void insertStart(int);
    void insertEnd(int);
    void insertPosition(int, int);


    //deletions
    void deleteStart();
    void deleteEnd();
    void deletePosition(int);
};


#endif //DATA_STRUCTURES_ALGORITHMS_LINKEDLIST_H
