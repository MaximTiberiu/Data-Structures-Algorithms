#include "../include/Queue.h"

Queue::Queue(int size) {
    arr = new int[size];
    capacity = size;
    front = 0;
    rear = -1;
    currSize = 0;
}

Queue::~Queue() {
    delete[] arr;
}

void Queue::dequeue() {
    if(isFull()) {
        std::cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    front = (front + 1) % capacity;
    currSize--;
}

void Queue::enqueue(int value) {
    if(isFull()) {
        std::cout << "OverFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    rear = (rear + 1) % capacity;
    arr[rear] = value;
    currSize++;
}

int Queue::peek() {
    if(isEmpty()) {
        std::cout << "UnderFlow\nProgram terminated\n";
        exit(EXIT_FAILURE);
    }

    return arr[front];
}

int Queue::size() {
    return currSize;
}

bool Queue::isEmpty() {
    return size() == 0;
}

bool Queue::isFull() {
    return size() == capacity;
}