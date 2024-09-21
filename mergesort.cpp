#include <iostream>
using namespace std;

class ls {
    int a[10];
    int n;
public:
    void input() {
        cin >> n;

        for (int i = 0; i < n; i++) {
            cin >> a[i];
        }
    }

    // Sort function to merge two arrays A and B into array C
    void sort(int A[], int B[], int C[], int m, int o) {
        int i, j, k;
        i = j = k = 0;

        while (i < m && j < o) {
            if (A[i] < B[j]) {
                C[k] = A[i];
                i++, k++;
            }
            else {
                C[k] = B[j];
                j++, k++;
            }
        }
        while (i < m) {
            C[k] = A[i];
            i++, k++;
        }
        while (j < o) {
            C[k] = B[j];
            j++, k++;
        }
    }

    void display(int C[], int size) {
        for (int i = 0; i < size; i++) {
            cout << C[i] << " ";
        }
        cout << endl;
    }
};

int main() {
    ls ob;

    // Example arrays
    int A[4] = {1, 7, 4, 5};
    int B[4] = {2, 3, 9, 4};
    int C[8]; // Array to store the merged and sorted result

    // Merge sort the arrays A and B into array C
    ob.sort(A, B, C, 4, 4);

    // Display the sorted array C
    ob.display(C, 8);

    return 0;
}