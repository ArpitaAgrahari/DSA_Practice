//Types of lInked list:
// Singly Linked List
//Doubly Linked List
//Circular linked list
// Circular doubly linked list

#include<iostream>
using namespace std;
class LLNode{
    public:
        int data;
        LLNode* next;

    LLNode(int data){
        this->data = data;
        this->next = NULL;
    }
};
int main(){
    LLNode* node1 = new LLNode(10);
    cout<<node1->data<<endl;
    cout<<node1->next<<endl;
}