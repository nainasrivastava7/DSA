#include <iostream>
using namespace std;

int arr[5];
int frontIndex = 0;
int rearIndex = -1;
int elementCount = 0;

void enqueue(int value) {
    if (elementCount >= 5) {
        cout << "Queue is full!" << endl;
    } else {
        rearIndex = (rearIndex + 1) % 5;
        arr[rearIndex] = value;
        elementCount++;
        cout << "Enqueued: " << value << endl;
    }
}

void dequeue() {
    if (elementCount == 0) {
        cout << "Queue is empty!" << endl;
    } else {
        cout << "Dequeued: " << arr[frontIndex] << endl;
        frontIndex = (frontIndex + 1) % 5;
        elementCount--;
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
