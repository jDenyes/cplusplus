#include "ll.h"
#include "stack.h"
#include <iostream>
#include "arrayStack.h"

void linkTest();
void stackTest();
void llStackTest();

int main(){
    llStackTest();
    return 0;
}

    LinkedList ll(5);
    ll.appendValue(8);
    ll.appendValue(6);
}

void stackRevereseLL(ll.getHead()) {

}

void linkTest() {
    LinkedList ll(5);
    ll.AppendValue(8);
    ll.AppendValue(3);
    ll.AppendValue(2);
    ll.AppendValue(232);
    ll.AppendValue(23);
    ll.AppendValue(28);
    std::cout << ll << std::endl;

    betterReverse(ll);
    std::cout << ll << std::endl;
    recursivePrint(ll.getHead());
}

void stackTest() {
    Stack stack(5);
    stack.push(5);
    std::cout << stack.pop();
    std::cout << stack.pop();
    std::cout << stack.pop();
}