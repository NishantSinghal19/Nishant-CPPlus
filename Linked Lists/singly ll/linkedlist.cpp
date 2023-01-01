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
void insertAtHead(Node* &head, int d){
    Node* temp = new Node(d);
    temp->next=head;
    head=temp;
}
void insertAtTail(Node* &tail,int d){
    Node* temp = new Node(d);
    tail->next = temp;
    tail=temp;
}
void insertAtMiddle(Node* &head,Node* &tail,int pos, int d){
    if(pos==1){
        insertAtHead(head,d);
        return;
    }
    Node* temp= head;
    int count=1;
    while(count<pos-1){
        temp=temp->next;
        count++;
    }
    if(temp->next==NULL){
        insertAtTail(tail,d);
        return;
    }
    Node* nodeToInsert = new Node(d);
    nodeToInsert->next=temp->next;
    temp->next=nodeToInsert;
}
void print(Node* &head){
    Node* temp=head;
    while(temp!= NULL){
        cout<<temp->data<<" ";
        temp=temp->next;
    }
    cout<<endl;
}
void deleteatpos(int pos, Node* &head,Node* &tail){
    if(pos==1){
        Node* temp=head;
        head=head->next;
        temp->next=NULL;
        delete temp;
    }else{
        Node* curr= head;
        Node* prev= NULL;
        int count=1;
        while(count<pos){
            prev=curr;
            curr=curr->next;
            count++;
        }
        prev->next=curr->next;
        if (prev->next==NULL)
        {
            tail=prev;
        }
        
        curr->next=NULL;
        delete curr;
    }
}
int main(){
    Node* node1 = new Node(10);
    // cout<<node1 -> data<<endl;
    // cout<<node1 ->next<<endl;
    Node* head = node1;
    Node* tail= node1;
    //insertAtHead(head,12);
    insertAtTail(tail,12);
    print(head);
    //insertAtHead(head,15);
    insertAtTail(tail,15);
    print(head);
    insertAtMiddle(head,tail,4,22);
    print(head);
    deleteatpos(4,head,tail);
    print(head);
    cout<<head->data<<endl;
    cout<<tail->data<<endl;
    return 0;
}