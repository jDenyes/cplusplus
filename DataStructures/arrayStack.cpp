#include "arrStack.h"

arrStack::arrStack(int size) {
    this->size = size;
    this->a = new int [size];
}

arrStack::~arrStack() {
    delete[] a;
}

void arrStack::Push(int x) {
    if(top >= (size - 1)) {
        this->size = this->size * 2;
        int* temp = new int [this->size];
        for(int i = 0; i < size/2; i++) {
            temp[i] = a[i];
        }
        delete[] a;
        this->a = temp;
    } 
    top++;
    a[top] = x;
}

void arrStack::Pop() {
    if(top >= 0) {
        top--;
    } else {
        std::cout << "stack is already emtpy" << std::endl;
    }
}

int arrStack::Top() {
    return a[top];
}

int arrStack::getTop() {
    return top;
}

int arrStack::getSize() {
    return size;
}

bool isOpeningBrace(char c) {
    if(c == '{' || c == '[' || c == '(') {
        return true;
    }
    return false;
}

bool areOppositeBraces(char open, char close) {
    if(open == '{' && close == '}') {
        return true;
    } else if(open == '[' && close == ']') {
        return true;
    } else if(open == '(' && close == ')') {
        return true;
    }
    return false;
}

bool balancedParentheses(const char *c) {
    arrStack a(10);
    while(*c != 0) {

        if(isOpeningBrace(*c)) {
            a.Push(*c);
        } else {
            if(areOppositeBraces(a.Top(), *c)) {
                a.Pop();
            } else {
                return false;
            }
        }
        c++;
    }
    return true;
}

void reverseString(char *c) {
    arrStack a(10);
    char* pc = c;

    while(*pc != 0) {
        a.Push(*pc);
        pc++;
    }
    pc = c;

    while(a.getTop() != 0) {
        *c = a.Top();
        a.Pop();
        c++;
    }

    *c = a.Top();
    c++;
    *c = 0;
    c = pc;
}