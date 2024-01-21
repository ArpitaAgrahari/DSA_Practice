//Types of lInked list:
// Singly Linked List
//Doubly Linked List
//Circular linked list
// Circular doubly linked list



//Basic Pseudo Code

// #include<iostream>
// using namespace std;
// class LLNode{
//     public:
//         int data;
//         LLNode* next;
//     //constructor
//     LLNode(int data){
//         this->data = data;
//         this->next = NULL;
//     }
// };
// int main(){
//     LLNode* node1 = new LLNode(10);
//     cout<<node1->data<<endl;
//     cout<<node1->next<<endl;
// }


//Insertion of SIngly LL

#include<iostream>
using namespace std;
class Node{
    public:
        int data;
        Node* next;
    
    Node(int data){
        this->data = data;
        this->next = NULL;
    }
};

void InsertionAtHead(Node* &head,int d){
    //new nod creation
    Node* temp = new Node(d);
    temp->next = head;
    head = temp;
}
void print(node* &head){
    Node* temp = head;
    while(temp!=NULL){
        cout<<temp<<" "<<endl;
        temp = temp->next;
    }
    cout<<endl;
}
int main(){
    Node* node1 = new Node(10);
}