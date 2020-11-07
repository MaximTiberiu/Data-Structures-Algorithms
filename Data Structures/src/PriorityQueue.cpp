#include "../include/PriorityQueue.h"


PriorityQueue::PriorityQueue() {
    front = nullptr;
}

void PriorityQueue::insert(int value, int priority) {
    node *temp, *q;
    temp = new node;
    temp->data = value;
    temp->priority = priority;

    if(front == nullptr || priority < front->priority) {
        temp->link = front;
        front = temp;
    }
    else {
        q = front;

        while(q->link != nullptr && q->link->priority <= priority)
            q = q->link;

        temp->link = q->link;
        q->link = temp;
    }
}

void PriorityQueue::remove() {
    node *temp;

    if(front == nullptr) {
        std::cout << "UnderFlow\nProgram Terminated\n";
        exit(EXIT_FAILURE);
    }
    else {
        temp = front;
        front = front->link;
        free(temp);
    }
}

void PriorityQueue::display() {
    node *temp = front;

    if(front == nullptr)
        std::cout << "Empty Queue\n";
    else while(temp != nullptr) {
        std::cout << temp->priority << "\t" << temp->data << "\n";
        temp = temp->link;
    }
}

