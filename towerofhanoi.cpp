#include <iostream>
using namespace std;

int movecount =0;
void towerOfHanoi(int n, char A, char B, char C) {
   
    if (n == 1) {
        cout << "Move disk 1 from " << A<< " to " << C << endl;
        movecount++;
        return;
    }
    
    
    towerOfHanoi(n - 1, A, C, B);
    
    cout << "Move disk " << n << " from " << A << " to " << C << endl;
    movecount++;
   
    towerOfHanoi(n - 1, B, A, C);
}

int main() {
    int n;
    cout << "Enter the number of disks: ";
    cin >> n;


    towerOfHanoi(n, 'A', 'B', 'C'); 
    cout<<"total numbers of moves "<<movecount<<endl;
    return 0;
}