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