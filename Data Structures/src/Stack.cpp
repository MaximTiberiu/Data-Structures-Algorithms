#include "../include/Stack.h"

Stack::Stack(int size) {
    st = new int[size];
    capacity = size;
    top = -1;
}

Stack::~Stack() {
    delete[] st;
}

bool Stack::isEmpty() {
    return top == -1;
}

bool Stack::isFull() {
    return top == capacity;
}

void Stack::push(int value) {
    if(isFull()) {
        std::cout << "OverFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    st[++top] = value;
}

void Stack::pop() {
    if(isEmpty()) {
        std::cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }

    st[top--];
}

int Stack::peek() {
    if(!isEmpty()) return st[top];
    else exit(EXIT_FAILURE);
}

int Stack::size() {
    return top + 1;
}

void Stack::display() {
    for(int i = 0 ; i < top + 1; i++)
        std::cout << st[i] << " ";
    std::cout << "\n";
}


