#include <iostream>
using namespace std;
class selection{
    int a[10],n;
    public:
    void input(){
        cout<<"enter the numbers"<<endl;
        cin>>n;
        for(int i=0; i<n-1; i++){
            cin>>a[i];
        }
    }
    void select(){
        cout<<"the number is"<<endl;
        for(int i=0; i<n; i++){
            for(int j=i+1; j<n; j++){
                if(a[j]<a[min_index]){
                    
                }
            }
        }


    }
    void display(){
        cout<<"the numbers is"<<n<<endl;
        for(int i=0; i<n; i++){
            cout<<"a[i] = "<<a[i]<<endl;
        }
    }
}