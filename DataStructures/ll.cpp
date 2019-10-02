#include "ll.h"
#include "stack.h"
#include <iostream>
#include "arrStack.h"

LinkedList::LinkedList(int value) {
    this->head = new Node(value);
    this->tail = this->head;
}

LinkedList::~LinkedList() {
    Node* pNode = this->getHead();
    while(pNode->getNext() != 0) {
        pNode = pNode->getNext();
        delete pNode->getPrev();
    }
    delete pNode;
}

void LinkedList::AppendValue(int value) {
    this->tail->setNext(new Node(value));
    this->tail->getNext()->setPrev(this->tail);
    this->tail = this->tail->getNext();
}

Node* LinkedList::getHead() const {
    return this->head;
}

void LinkedList::setHead(Node* node){
    this->head = node;
}

Node* LinkedList::getTail() const {
    return this->tail;
}

std::ostream& operator<<(std::ostream& out, LinkedList& ll) {
    Node* pNode = ll.getHead();
    while(pNode != 0) {
        out << pNode->getValue();
        if(pNode->getNext() != 0) {
            out << ", ";
        }
        pNode = pNode->getNext();
    }
    return out;
}

void reverseList(LinkedList& ll) {
    Node* pStart = ll.getHead();
    Node* pEnd = ll.getTail(); 
    while(pStart->getNext() != pEnd->getPrev() && pEnd->getNext() != pStart) {
        swapLinks(pStart, pEnd);
        pStart = pStart->getNext();
        pEnd = pEnd->getPrev();
    }
}

void betterReverse(LinkedList& ll) {
    Node* temp = ll.getHead();
    Node* prevNode = 0;
    Node* nextNode = temp->getNext();

    while(temp != 0){
        nextNode = temp->getNext();
        temp->setNext(prevNode);
        prevNode = temp;
        ll.setHead(temp);
        temp = nextNode;
    }
}

void swapLinks(Node* n1, Node* n2) {
    int temp = n1->getValue();
    n1->setValue(n2->getValue());
    n2->setValue(temp);
}

void recursivePrint(Node* head) {
    if(head != 0) {
        std::cout << head->getValue() << ", ";
        recursivePrint(head->getNext());
    } else {
        std::cout << "\n";
    }
}

void recursiveReverse(Node* head) {
     if(head->getNext() == 0) {
         
     }
}

void stackReverse(Node* head) {
    arrStack stack(10);
}