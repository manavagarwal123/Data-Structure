// insertion at beginning
// #include <iostream>
// using namespace std;
// class Node{
//     int data;
//     Node* next;
//     public:
//     Node(int data){
//         this->data= data;
//         this->next =NULL;

//     }
// void insertAtBegin( Node* &head,int data){   // & edit in the main memory
//     Node * temp = new Node(data);
//     temp->next = head;
//     head = temp;
// }
// void print(Node* head){
//     Node * temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"";
//         temp =temp->next;

//     }
//     cout<<endl;
// }

// };
// int main(){
//     Node* head =NULL;
//     Node node(0);    // using the concept of class we need to create an object
//     node.insertAtBegin(head,5);
//     node.insertAtBegin(head,10);
//     node.print(head);
// return 0;
// }

// // insertion at end
// #include <iostream>
// using namespace std;
// class Node{
//     int data;
//     Node* next;
//     public:
//     Node(int data){
//         this->data= data;
//         this->next =NULL;

//     }
// void insertAtTail( Node* &tail,int data){   // & edit in the main memory
//     Node * temp = new Node(data);
//     tail->next = temp;
//     tail = temp; ;
// }
// void print(Node* head){
//     Node * temp = head;
//     while(temp!=NULL){
//         cout<<temp->data<<"";
//         temp =temp->next;

//     }
//     cout<<endl;
// }

// };
// int main(){
//     Node* head = new Node(5);
//     Node* tail = head;
//     Node node(0);    // using the concept of class we need to create an object
//     node.insertAtTail(tail,5);
//     node.insertAtTail(tail,15);
//     node.print(head);
// return 0;
// }


// insertion at middle
#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int data) {
        this->data = data;
        this->next = NULL;
    }
};

void insertatposition(Node* &head, int position, int d) {
    // If inserting at position 1 (start of list)
    if (position == 1) {
        Node* newNode = new Node(d);
        newNode->next = head;
        head = newNode;
        return;
    }

    Node* temp = head;
    int count = 1;

    // Traverse to the position before the insertion point
    while (count < position - 1 && temp != NULL) {
        temp = temp->next;
        count++;
    }

    // If the position is valid
    if (temp != NULL) {
        Node* newNode = new Node(d);
        newNode->next = temp->next;
        temp->next = newNode;
    } else {
        cout << "Position out of range" << endl;
    }
}

void print(Node* head) {
    Node* temp = head;
    while (temp != NULL) {
        cout << temp->data << " ";
        temp = temp->next;
    }
    cout << endl;
}

int main() {
    // Create the head node
    Node* head = new Node(10);

    // Insert nodes at various positions
    insertatposition(head, 2, 456);
    insertatposition(head, 5, 45);  // Will be out of range
    insertatposition(head, 1, 34);
    insertatposition(head, 3, 12);
    insertatposition(head, 6, 23);  // Will be out of range
    insertatposition(head, 4, 42);

    // Print the list
    print(head);

    return 0;
}