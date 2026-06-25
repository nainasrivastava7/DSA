#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* top = nullptr;

void push(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = top;
    top = newNode;
    cout << "Pushed: " << value << endl;
}

void pop() {
    if (top == nullptr) {
        cout << "Stack is empty!" << endl;
    } else {
        Node* temp = top;
        cout << "Popped: " << top->data << endl;
        top = top->next;
        delete temp;
    }
}

int main() {
    push(10);
    push(20);
    push(30);

    pop();
    pop();

    return 0;
}
