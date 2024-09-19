#include<iostream>
using namespace std;

class Node{
    public:
    int data;
    Node *next;
    Node(int val){
        data = val;
        next = NULL;
    }
};

void insertAtTail(Node* &head, int val){
    
    Node* new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    Node* temp = head;
    while(temp->next != NULL){
        temp = temp->next;
    }
    temp->next = new_node;
    new_node->next = NULL;
}

void insertAtHead(Node* &head, int val){
    
    Node* new_node = new Node(val);
    if (head == NULL)
    {
        head = new_node;
        return;
    }
    new_node->next = head;
    head = new_node;
}
void deleteNode(Node* head,int val){
    Node* temp = new Node(-1);
    temp->next = head;
    while(temp->next->data != val){
        temp = temp->next;
    }
    Node* toDelete = temp->next;
    temp->next = temp->next->next;

    delete toDelete;

}
void display(Node* head){
    Node* temp = head;
    while (temp != NULL)
    {
        cout<<temp->data<<"->";
        temp = temp->next;
    }
    cout<<"NULL"<<endl;
    
}

int main()
{
    Node* head = NULL;
    insertAtTail(head,1);
    insertAtTail(head,2);
    insertAtTail(head,3);
    insertAtTail(head,4);
    insertAtHead(head,5);
    
    display(head);
    return 0;
}