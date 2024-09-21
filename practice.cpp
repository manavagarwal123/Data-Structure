#include <iostream>
using namespace std;
class Node{
    int data;
    Node* next;
    public:
    Node(int data){
        this->data = data;
        this->next = NULL;

    }
    ~Node(){
        int value = this->value;
        if(this->next )
    }
    void Insertathead(Node* &head,int data){
        Node* temp = new Node(data);
       
        temp ->next = head;
        head = temp;

    }
    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<endl;
            temp = temp->next;
        }
    }

};
int main(){
    Node* head = NULL;
    Node node(0);
    node.Insertathead(head,23);
    node.Insertathead(head,12);
    node.print(head);
 }