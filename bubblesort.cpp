#include <iostream>
using namespace std;
class bubble{
    int n,a[10];
    public:
    void input();
    void sort();
    void display();
    
};
void bubble::input(){
    cout<<"enter the numbers";
    cin>>n;
    for(int i=0; i<=n-1; i++){
        cin>>a[i];
    }
}
void bubble::sort(){
    int i,j,temp;
    for(i=0; i<n-1; i++){
        for(j=0; j<n-i-1; j++){
            if(a[j]>a[j+1]){
                temp =a[j];
                a[j]=a[j+1];
                a[j+1]=temp;
            }
        }
    }
}
void bubble::display(){

    cout<<"the numbers is ";
    for(int i=0; i<n; i++){
        cout<<" "<<a[i];
    }

};
int main(){
    bubble ob;
    ob.input();
    ob.sort();
    ob.display();
}