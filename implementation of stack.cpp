#include<iostream>

class Stack {
private:
    int* arr;
    int size;
    int top;

public:
    Stack(int size) : size(size), top(-1) {
        arr = new int[size];
    }

    ~Stack() {
        delete[] arr;  // Destructor to deallocate memory
    }

    void push(int data) {
        if (top == size - 1) {
            std::cout << "Stack overflow" << std::endl;
            return;
        }
        else {
            top++;
            arr[top] = data;
        }
    }

    void pop() {
        if (top == -1) {
            std::cout << "Stack underflow" << std::endl;
        }
        else {
            top--;
        }
    }

    bool isempty() {
        return top == -1;
    }

    int gettop() {
        if (isempty()) {
            throw std::runtime_error("Stack empty");
        }
        return arr[top];
    }

    int getsize() {
        return top + 1;
    }
};

int main() {
    // You can test your stack implementation here
    return 0;
}
