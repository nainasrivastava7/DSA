#include <iostream>
using namespace std;

int arr[5];       
int topIndex = -1; 


void push(int value) {
    if (topIndex >= 4) {
        cout << "Stack is full!" << endl;
    } else {
        topIndex++;
        arr[topIndex] = value;
        cout << "Pushed: " << value << endl;
    }
}


void pop() {
    if (topIndex == -1) {
        cout << "Stack is empty!" << endl;
    } else {
        cout << "Popped: " << arr[topIndex] << endl;
        topIndex--;
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
