#include "../include/linkedList.h"

linkedList::linkedList() {
    head = nullptr;
    tail = nullptr;
}

linkedList::~linkedList() {
    node *curr;
    node *next;

    curr = head;
    while(curr != nullptr) {
        next = curr->next;
        delete curr;
        curr = next;
    }
    head = nullptr;
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
    node *temp = head;

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
    node *curr = head;
    node *temp = new node;

    for(int i = 0 ; i < position ; i++)
    {
        pre = curr;
        curr = curr->next;
    }

    temp->data = value;
    pre->next = temp;
    temp->next = curr;
}

void linkedList::deleteStart() {
    node *temp = head;
    head = head->next;
    delete temp;
}

void linkedList::deleteEnd() {
    node *curr = head;
    node *prev = new node;

    while(curr->next != nullptr) {
        prev = curr;
        curr = curr->next;
    }

    tail = prev;
    prev->next = nullptr;

    delete curr;
}

void linkedList::deletePosition(int position) {
    node *curr = head;
    node *prev = new node;

    for(int i = 0 ;i < position ; i++)
    {
        prev = curr;
        curr = curr->next;
    }

    prev->next = curr->next;
}

int linkedList::getLength() {
    int len = 0;

    node *curr = head;
    while(curr != nullptr) {
        len++;
        curr = curr->next;
    }

    return len;
}

bool linkedList::search(int value) {
    node *curr = head;

    while(curr != nullptr) {
        if (curr->data == value) return true;
        curr = curr->next;
    }

    return false;
}

int linkedList::getNth(int position) {
    node *curr = head;

    for(int i = 0 ; i < position ; i++)
        curr = curr->next;

    return curr->data;
}