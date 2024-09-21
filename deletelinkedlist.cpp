#include <iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        this->data=data;
        this->next = NULL;
    }
    ~Node(){
        int value = this->data;
        if(this->next!=NULL){
            delete next;
        }
        cout<<"memory is free for node"<<value<<endl;
    }
    void insertathead(Node* &head,int data){
        Node* temp = new Node(data);
        temp ->next = head;
        head = temp;  
    }
    
        void deleteNode(int position, Node* &head){
            if(position == 1){
                Node* temp = head;
                head = head->next;
                temp->next = NULL;
                delete temp;

        
            }
        else{
            Node* curr = head;
            Node* prev = NULL;
            int count = 1;
            while(count<position){
                prev= curr;
                curr = curr->next;
                count++;
            }
            prev ->next = curr ->next;
            curr ->next = NULL;
            delete curr;
        }
        }

        void print(Node* head){
        Node* temp = head;
        while(temp!= NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
        cout<<endl;

    }
};
int main(){
    Node* head = NULL;
    Node node(0);
    node.insertathead(head,2);
    node.insertathead(head,12);
    node.insertathead(head,14);
    node.insertathead(head,79);
    node.insertathead(head, 11);
    
  
    node.deleteNode(4,head);
    
    node.print(head);
    
}