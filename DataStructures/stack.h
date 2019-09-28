#pragma once
#include "node.h"

class Stack {
    public:
        Stack();
        Stack(int);
        Stack(Node*);
        void setHead(Node*);
        Node* getHead();
        void push(Node*);
        void push(int);
        int pop();
    private:
        Node* head;
};