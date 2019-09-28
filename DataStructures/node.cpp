#include "node.h"

Node::Node(int value) {
    this->value = value;
    this->next = 0;
    this->prev = 0;
}

Node::Node(Node &node) {
    this->value = node.getValue();
    this->next = node.getNext();
    this->prev = node.getPrev();
}

Node::~Node() {
    this->prev = 0;
    this->next = 0;
    delete this;
}

Node& Node::operator = (Node& other) {
    this->value = other.getValue();
    this->next = other.getNext();
    this->prev = other.getPrev();
    return *this;
}

void Node::setNext(Node *node) {
    this->next = node;
}

Node* Node::getNext() const {
    return this->next;
}

void Node::setPrev(Node *node) {
    this->prev = node;
}

void Node::setValue(int value) {
    this->value = value;
}

Node* Node::getPrev() const {
    return this->prev;
}

int Node::getValue() const {
    return this->value;
}

