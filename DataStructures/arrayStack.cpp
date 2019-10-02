#include <iostream>

class arrStack{
private:
    int size = 0;
    int* a = nullptr;
    int top = -1;

public:
    arrStack(int size) {
        this->size = size;
        this->a = new int [size];
    }

    ~arrStack() {
        delete[] a;
    }

    void Push(int x) {
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

    void Pop() {
        if(top >= 0) {
            top--;
        } else {
            std::cout << "stack is already emtpy" << std::endl;
        }
    }

    int Top() {
        return a[top];
    }
};

main() {
    arrStack stack(1);
    stack.Push(10);
    stack.Push(10);
    stack.Push(10);
    stack.Pop();
    stack.Pop();
    stack.Pop();
}