#include<iostream>
#include<bits/stdc++.h>
using namespace std;
class Node{
    public:
    int data;
    Node* next;
    Node (int data){
        this -> data = data;
        this -> next= NULL;
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
void insertNode(Node* &tail,int element,int d){
    if (tail==NULL)
    {
        Node* temp=new Node(d);
        tail=temp;
        temp->next=temp;
    }else {
        Node* curr = tail;
        while (curr->data!=element)
        {
            curr=curr->next;
        }
        Node* temp= new Node(d);
        temp->next=curr->next;
        curr->next=temp;
    }
    
}
void print(Node* &tail){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }
    Node* temp=tail;
    do{
        cout<<tail->data<<" ";
        tail=tail->next;

    }while(tail!=temp);
    cout<<endl;
}
void deleteNode(Node* &tail,int value){
    if(tail==NULL){
        cout<<"List is empty"<<endl;
        return;
    }else{
        Node* prev=tail;
        Node* curr=prev->next;
        while (curr->data != value)
        {
            prev=curr;
            curr=curr->next;
        }
        prev->next=curr->next;
        if (curr==prev)
        {
            tail=NULL;
        }
        
        else if (tail==curr)
        {
            tail=prev;
        }
        
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* tail=NULL;
    insertNode(tail,5,3);
    print(tail);
    insertNode(tail,3,5);
    print(tail);
    insertNode(tail,5,7);
    print(tail);
    insertNode(tail,7,9);
    print(tail);
    insertNode(tail,5,6);
    print(tail);
    deleteNode(tail,3);
    print(tail);
    return 0;
}