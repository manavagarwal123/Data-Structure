#include <iostream>
using namespace std;

class Queue {
    int *arr;
    int front, rear, size;
    
public:
    Queue() {
        size = 100001;
        arr = new int[size];
        front = rear = 0;
    }

    bool isEmpty() {
        return front == rear;
    }

    void push(int element) {
        if (rear == size) {
            cout << "Queue is full" << endl;
        } else {
            arr[rear] = element;
            rear++;
        }
    }

    int pop() {
        if (front == rear) {
            cout << "Queue is empty" << endl;
            return -1;
        } else {
            int ans = arr[front];
            arr[front] = -1; // Optionally set the popped element to -1
            front++;
            
            // Reset front and rear if queue becomes empty
            if (front == rear) {
                front = rear = 0;
            }
            return ans;
        }
    }
};

int main() {
    Queue ob;
    ob.push(9);
    ob.push(10);
    
    cout << "Popped element: " << ob.pop() << endl; // Should print 9
    cout << "Popped element: " << ob.pop() << endl; // Should print 10
    cout << "Popped element: " << ob.pop() << endl; // Should print -1 (queue is empty)

    return 0;
}