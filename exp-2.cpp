#include <iostream>
#include <string>
using namespace std;

char str[40], pattern[5], repeat[5], answer[50];
int i, j, c, m, k,Count = 0;
void stringmatch() {
    i = m = c = j = 0;
    while (str[c] != '\0') {
        if (str[m] == pattern[i]) {
            i++;
            m++;
            if (pattern[i] == '\0') {
                Count = 1;
                for (k = 0; repeat[k] != '\0'; k++, j++) {
                    answer[j] = repeat[k];
                }
                i = 0;
                c = m;
            }
        } 
        else {
            answer[j] = str[c];
            j++;
            c++;
            m = c;
            i = 0;
        }
    }
    answer[j] = '\0';
}
int main() {
    cout<<"Name: Manav Agarwal\nUID: 23BAI70003\nClass:23AML-1(A)\n"<<endl;
    cout << "Enter a main string: ";
    cin.getline(str, 40);
    cout << "Enter a pattern string: ";
    cin.getline(pattern, 5);
    cout << "Enter a replace string: ";
    cin.getline(repeat, 5);
    stringmatch();
    if (Count == 1) {
        cout << "The resultant string is: " << answer << endl;
    } else {
        cout << "Pattern string NOT found" << endl;
    }
    return 0;
}