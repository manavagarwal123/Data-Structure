//insert at head in double linked list

#include <iostream>
using namespace std;
class Node{
    int data;
    Node* prev;
    Node* next;
    public:
    Node(int d){
        data = d;
        next = NULL;
        prev = NULL;
    }
    void insertathead(Node* &head,int d){
        Node* temp = new Node(d);
        temp->next = head;
        head->prev = temp;
        head = temp;
    }
    void print(Node* head){
        Node* temp = head;
        while(temp!=NULL){
            cout<<temp->data<<" ";
            temp = temp->next;
        }
    }

};
int main(){
    Node* head = new Node(10);
    Node node(0);
    node.insertathead(head,19);
    node.insertathead(head,90);
    node.print(head);
}