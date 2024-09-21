#include <iostream>
#include <string>
using namespace std;
#define MAX 50

class Stack {
    int top, a[MAX];
public:
    Stack() {
        top = -1;
    }

    void push(int p) {
        if (top == MAX - 1) {
            cout << "Overflow" << endl;
        } else {
            top++;
            a[top] = p;
            cout << "Element pushed: " << p << endl;
        }
    }

    int pop() {
        if (top == -1) {
            cout << "Underflow" << endl;
            return -1;
        } else {
            int p = a[top];
            top--;
            return p;
        }
    }

    void display() {
        if (top == -1) {
            cout << "Stack is empty" << endl;
        } else {
            cout << "Stack contents: ";
            for (int i = 0; i <= top; i++) {
                cout << a[i] << " ";
            }
            cout << endl;
        }
    }

    bool isPalindrome(string str) {
        int n = str.length();
        Stack ob;
        for (int i = 0; i < n; i++) {
            ob.push(str[i]);
        }
        for (int i = 0; i < n; i++) {
            if (ob.pop() != str[i]) {
                return false;
            }
        }
        return true;
    }
};

int main() {
    Stack ob;
    int choice, value;
    string str;

    do {
        cout << "1. Push an Element onto Stack\n";
        cout << "2. Pop an Element from Stack\n";
        cout << "3. Check if String is Palindrome\n";
        cout << "4. Demonstrate Overflow and Underflow\n";
        cout << "5. Display the status of Stack\n";
        cout << "6. Exit\n";
        cout << "Enter your choice: ";
        cin >> choice;

        switch (choice) {
            case 1:
                cout << "Enter the value to be pushed: ";
                cin >> value;
                ob.push(value);
                break;

            case 2:
                value = ob.pop();
                if (value != -1)
                    cout << "Popped element: " << value << "\n";
                break;

            case 3:
                cout << "Enter a string to check palindrome: ";
                cin >> str;
                if (ob.isPalindrome(str))
                    cout << str << " is a palindrome\n";
                else
                    cout << str << " is not a palindrome\n";
                break;

            case 4:
                // Demonstrate Overflow
                for (int i = 0; i < MAX + 1; i++) {
                    ob.push(i);
                }
                // Demonstrate Underflow
                for (int i = 0; i < MAX + 1; i++) {
                    ob.pop();
                }
                break;

            case 5:
                ob.display();
                break;

            case 6:
                cout << "Exiting...\n";
                break;

            default:
                cout << "Invalid choice! Please enter a valid option.\n";
        }
    } while (choice != 6);

    return 0;
}