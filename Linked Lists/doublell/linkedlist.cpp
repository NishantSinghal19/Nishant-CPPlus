#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* prev;
    Node* next;
    Node(int d){
        this->data=d;
        this->next=NULL;
        this->prev=NULL;
    }
    ~Node(){
        int value=this->data;
        if (this->next!=NULL)
        {
            delete next;
            this->next=NULL;
        }
        cout<<"Memory is free for node for data"<< value<<endl;
    }
};
void insertAtHead(Node* &head,Node* &tail,int d){
    if (head==NULL)
    {
        Node* temp=new Node(d);
        head=temp;
    }
    else{
    Node* temp = new Node(d);
    temp->next=head;
    head->prev=temp;
    head=temp;}
}
void insertAtTail(Node* &tail,Node* &head,int d){
    if (tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        head=temp;
    }
    else{
    Node* temp = new Node(d);
    tail->next = temp;
    temp->prev=tail;
    tail=temp;}
}
void insertAtMiddle(Node* &head,Node* &tail,int pos, int d){
    if(pos==1){
        insertAtHead(head,tail,d);
        return;
    }
    Node* temp= head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,head,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next->prev=nodeToInsert;
    temp->next=nodeToInsert;
    nodeToInsert->prev=temp;

}
void print(Node* &head){
    Node* temp =head;
    while(temp!=NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteNode(int pos, Node* &head){
    if(pos==1){
        Node* temp=head;
        temp->next->prev=NULL;
        head=temp->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* curr= head;
        Node* previous= NULL;
        int count=1;
        while(count<pos){
            previous=curr;
            curr=curr->next;
            count++;
        }
        curr->prev=NULL;
        previous->next=curr->next;
        curr->next=NULL;
        delete curr;
}}
int getLength(Node* &head){
    int len=0;
    Node* temp =head;
    while(temp!=NULL){
        len++;
        temp=temp->next;

    }
    return len;
}
int main(){
    Node* node1= new Node(10);
    Node* head=node1;
    Node* tail=node1;
    print(head);
    cout<<getLength(head)<<endl;
    insertAtHead(head,tail,11);
    print(head);
    insertAtHead(head,tail,14);
    print(head);
    insertAtHead(head,tail,16);
    print(head);
    insertAtTail(tail,head,19);
    print(head);
    insertAtMiddle(head,tail,3,23);
    print(head);
    deleteNode(1,head);
    print(head);
    deleteNode(4,head);
    print(head);
    return 0;
}