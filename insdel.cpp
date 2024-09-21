#include <iostream>
using namespace std;

class Insert {
    int a[10], n;

public:
    Insert()  {} 

    void input() {
        cout << "Enter the number of elements (max 10): ";
        cin >> n;
       
        cout << "Enter the elements:\n";
        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    void inserte(int pos, int val) {
        if (pos < 0 || pos > n || n == 10) {
            cout << "Invalid position or array is full!\n";
            return;
        }
        for (int i = n - 1; i >= pos; i--) {
            a[i + 1] = a[i];
        }
        a[pos] = val;
        n = n + 1;
    }

    void del(int pos) {
        if (pos < 0 || pos >= n) {
            cout << "Invalid position!\n";
            return;
        }
        for (int i = pos; i < n - 1; i++) {
            a[i] = a[i + 1];
        }
        n--;
    }

    void display() {
        cout << "Array elements:\n";
        for (int i = 0; i < n; i++) {
            cout << a[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    Insert ob;
    int ch, pos, val;
    cout<<"Name = Manav Agarwal"<<endl;
    cout<<"UID = 23BAI70003"<<endl;

   
    ob.input();

    while (true) {
    
        cout << "1. Insert an Element at a given Position\n";
        cout << "2. Delete an Element at a given Position\n";
        cout << "3. Display Array Elements\n";
        cout << "4. Exit\n";
        cout << "Enter your choice: ";
        cin >> ch;

        switch (ch) {
            case 1:
                cout << "Enter the position: ";
                cin >> pos;
                cout << "Enter the value: ";
                cin >> val;
                ob.inserte(pos, val);
                break;
            case 2:
                cout << "Enter the position: ";
                cin >> pos;
                ob.del(pos);
                break;
            case 3:
                ob.display();
                break;
            case 4:
                std::exit(0);
            default:
                cout << "Invalid choice! Please try again.\n";
        }
    }

    return 0;
}
