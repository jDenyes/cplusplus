#pragma once

class Node {
    public:
        Node(int);
        Node(Node&);
        ~Node();

        Node& operator = (Node&);

        void setNext(Node*);
        Node* getNext() const;
        void setPrev(Node*);
        Node* getPrev() const;
        int getValue() const;
        void setValue(int);
    private:
        int value;
        Node* next;
        Node* prev;
};