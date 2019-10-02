#pragma once
#include <iostream>
#include "node.h"

class LinkedList {
    public:
        LinkedList(int value);
        ~LinkedList();
        void AppendValue(int value);
        Node* getHead() const;
        Node* getTail() const;
        void setHead(Node*);
    private:
        Node* head;
        Node* tail;        
};

std::ostream& operator<<(std::ostream&, LinkedList&);
void reverseList(LinkedList&);
void swapLinks(Node*, Node*);
void betterReverse(LinkedList& ll);
void recursivePrint(Node* head);
void recursiveReverse( );
void stackReverse(Node *);
