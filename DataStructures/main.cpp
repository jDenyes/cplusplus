#include "ll.h"
#include "stack.h"
#include <iostream>
#include "arrStack.h"

void linkTest();
void stackTest();
void reverseStackTest();
void bracesTest();

int main(){
    return 0;
}

void bracesTest() {
    const char *braces = "{([]){}}()[]";
    std::cout << balancedParentheses(braces) << std::endl;
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

void reverseStackTest() {
    char c[] = "test";
    std::cout << c << std::endl;
    reverseString(c);
    std::cout << c << std::endl;
}

void stackTest() {
    Stack stack(5);
    stack.push(5);
    std::cout << stack.pop();
    std::cout << stack.pop();
    std::cout << stack.pop();
}