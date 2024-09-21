#include<iostream>
#include<string>
using namespace std;
int  search(string str1,string str2){
    int n=str1.length();
    int m=str2.length();

    for(int i=0;i<=n-m;i++){
        int j;
        for(j=0;j<m;j++){
            if(str1[i+j]!=str2[j]){
                break;
            }
        }
        if(j==m){
            cout<<"Pattern found at index : "<<i<<endl;
            return i;
        }
    }

    return -1;
}

int main(){
    string str1;
    string str2;
    string str3;

    cout<<"Enter the string in which pattern has to be searched : ";
    getline(cin,str1);
    

    cout<<"Enter the pattern to search : ";
    getline(cin,str2);

    cout<<"Enter the pattern to resplace with : ";
    getline(cin,str3);


    int ans=search(str1,str2);

    if(ans==-1){
        cout<<"Invalid Output"<<endl;
    }
    
    string res=str1;
    int j=0;
    for(int i=ans;i<res.length();i++){
        res[i]=str3[j];
        j++;
    }

    cout<<res;

    return 0;
}