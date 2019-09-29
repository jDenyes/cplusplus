#include <iostream>

template<typename T>
void swap(T& first, T& other) {
    T temp = first;
    first = other;
    other = temp;
}

template<typename T>
void swap(T a[], T b[], int size) {
    for(int i = 0; i < size; i++) {
        T temp = a[i];
        a[i] = b[i];
        b[i] = temp;
    }
}

int main() {
    int x(5);
    int y(3);
    swap(x, y);
    std::cout << x << std::endl;
    return 0;
}