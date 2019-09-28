#include "stack.h"

Stack::Stack() {
    this->head = 0;
}

Stack::Stack(int val) {
    this->head = new Node(val);
}

Stack::Stack(Node* node) {
    this->head = node;
}

void Stack::push(Node* node) {
    node->setNext(this->head);
    this->head = node;
}

void Stack::push(int val) {
    Node* node = new Node(val);
    node->setNext(this->head);
    this->head = node; 
}

int Stack::pop() {
    int popVal = this->head->getValue();
    this->head = this->head->getNext();
    return popVal;
}