#include "../include/linkedList.h"

linkedList::linkedList() {
    head = nullptr;
    tail = nullptr;
}

void linkedList::createNode(int value) {
    node *temp = new node;
    temp->data = value;
    temp->next = nullptr;

    if(head == nullptr) {
        head = temp;
        tail = temp;
        temp = nullptr;
    }
    else {
        tail->next = temp;
        tail = temp;
    }
}

void linkedList::display() {
    node *temp = new node;
    temp = head;

    while(temp != nullptr) {
        std::cout << temp->data << " ";
        temp = temp->next;
    }
    std::cout << "\n";
}

void linkedList::insertStart(int value) {
    node *temp = new node;
    temp->data = value;
    temp->next = head;
    head = temp;
}

void linkedList::insertEnd(int value) {
    linkedList::createNode(value);
}

void linkedList::insertPosition(int position, int value) {
    node *pre = new node;
    node *curr = new node;
    node *temp = new node;

    curr = head;

    for(int i = 1 ; i < position ; i++)
    {
        pre = curr;
        curr = curr->next;
    }

    temp->data = value;
    pre->next = temp;
    temp->next = curr;
}

void linkedList::deleteStart() {
    node *temp = new node;
    temp = head;
    head = head->next;
    delete temp;
}

void linkedList::deleteEnd() {
    node *curr = new node;
    node *prev = new node;
    curr = head;

    while(curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }

    tail = prev;
    prev->next = nullptr;

    delete curr;
}

void linkedList::deletePosition(int position) {
    node *curr = new node;
    node *prev = new node;
    curr = head;

    for(int i = 1 ;i < position ; i++)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
}

linkedList::~linkedList() {
    node *curr = new node;
    node *next;

    curr = head;
    while(curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    head = nullptr;
}