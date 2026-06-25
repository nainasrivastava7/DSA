#include <iostream>
using namespace std;

struct Node {
    int data;
    Node* next;
};

Node* front = nullptr;
Node* rear = nullptr;

void enqueue(int value) {
    Node* newNode = new Node();
    newNode->data = value;
    newNode->next = nullptr;
    
    if (rear == nullptr) {
        front = rear = newNode;
    } else {
        rear->next = newNode;
        rear = newNode;
    }
    cout << "Enqueued: " << value << endl;
}

void dequeue() {
    if (front == nullptr) {
        cout << "Queue is empty!" << endl;
    } else {
        Node* temp = front;
        cout << "Dequeued: " << front->data << endl;
        front = front->next;
        
        if (front == nullptr) {
            rear = nullptr;
        }
        delete temp;
    }
}

int main() {
    enqueue(10);
    enqueue(20);
    enqueue(30);

    dequeue();
    dequeue();

    return 0;
}
