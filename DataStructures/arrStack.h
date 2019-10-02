#include <iostream>

class arrStack{
private:
    int size = 0;
    int* a = nullptr;
    int top = -1;

public:
    arrStack(int size);
    ~arrStack();
    void Push(int x);
    void Pop();
    int Top();
};

// main() {
//     arrStack stack(1);
//     stack.Push(10);
//     stack.Push(10);
//     stack.Push(10);
//     stack.Pop();
//     stack.Pop();
//     stack.Pop();
// }