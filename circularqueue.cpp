#include <iostream>
#define MAX 5  // Define the maximum size of the circular queue

using namespace std;

class CircularQueue {
    char queue[MAX];  // Array to store the queue elements
    int front, rear;

public:
    CircularQueue() {
        front = rear = -1;  // Initialize front and rear to -1 indicating an empty queue
    }

    bool isFull() {
        return (front == (rear + 1) % MAX);  // Check if the queue is full
    }

    bool isEmpty() {
        return (front == -1);  // Check if the queue is empty
    }

    void insert(char element) {
        if (isFull()) {
            cout << "Queue Overflow! Cannot insert more elements.\n";
            return;
        }
        if (isEmpty()) {
            front = rear = 0;  // Insert the first element
        } else {
            rear = (rear + 1) % MAX;  // Update the rear position circularly
        }
        queue[rear] = element;
        cout << "Inserted " << element << " into the queue.\n";
    }

    void remove() {
        if (isEmpty()) {
            cout << "Queue Underflow! No elements to remove.\n";
            return;
        }
        cout << "Deleted " << queue[front] << " from the queue.\n";
        if (front == rear) {
            // The queue becomes empty after this removal
            front = rear = -1;
        } else {
            front = (front + 1) % MAX;  // Update the front position circularly
        }
    }

    void displayQueue() {
        if (isEmpty()) {
            cout << "Queue is empty.\n";
            return;
        }
        cout << "Queue elements are: ";
        int i = front;
        while (true) {
            cout << queue[i] << " ";
            if (i == rear)
                break;
            i = (i + 1) % MAX;
        }
        cout << "\n";
    }
};

int main() {
    CircularQueue cq;
    int choice;
    char element;

    do {
        cout << "\nMenu:\n";
        cout << "1. Insert an element\n";
        cout << "2. Delete an element\n";
        cout << "3. Display the queue\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
        case 1:
            cout << "Enter the character to insert: ";
            cin >> element;
            cq.insert(element);
            break;
        case 2:
            cq.remove();
            break;
        case 3:
            cq.displayQueue();
            break;
        case 4:
            cout << "Exiting...\n";
            break;
        default:
            cout << "Invalid choice! Please try again.\n";
        }
    } while (choice != 4);

    return 0;
}