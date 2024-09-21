#include <iostream>
#include<queue>
#include<vector>
using namespace std;
int main(){
    queue<int>q;
    q.push(1);
    q.push(2);
    q.push(8);
    cout<<"the size of the queue = "<<q.size()<<endl;
    cout<<"the front element of queue is "<<q.front()<<endl;
    if(q.empty()){
      cout<<"check the queue is empty "<<endl;
    }
    else{
         cout<<"the queue is not empty"<<endl;
    }
  

}