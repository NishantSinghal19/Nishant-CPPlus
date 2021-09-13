#include <iostream>
#include <bits/stdc++.h>
using namespace std;

class node
{
public:
    int data;
    node* next;
    node(int val)
    {
        data=val;
        next=NULL;
    }
};
void insertatHead(node* &head,int val){
    node* n= new node(val);
    n->next=head;
    head=n;
}

void insertatTail(node* &head,int val){
    node* n= new node(val);

    if (head==NULL)
    {
        head=n;
        return;
    }
    

    node*temp=head;
    while (temp->next!=NULL)
    {
        temp=temp->next;
    }
    temp->next=n;
}

void display(node* head){
    node* temp=head;
    while (temp!=NULL)
    {
        cout<<temp->data<<"->";
        temp=temp->next;
    }
    cout<<"NULL"<<endl;
}/*
bool search(node*head,int key){
    node* temp=head;
    while (temp!=NULL)
    {
        if (temp->data==key)
        {
            return true;
        }
        temp=temp->next;
    }
    return false;
}
void deleteatHead(node* &head){
    node* todelete=head;
    head=head->next;

    delete todelete;
}

void deletion(node* &head,int val){
    if (head==NULL)
    {
        return;
    }
    if (head->next==NULL)
    {
        deleteatHead(head);
        return;
    }
    
    
    node* temp=head;
    while (temp->next->data!=val)
    {
        temp=temp->next;
    }
    node* todelete=temp->next;
    temp->next=temp->next->next;
    delete todelete;
}

node* reverse(node* &head){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;

    while (currentptr!=NULL)
    {
        nextptr=currentptr->next;
        currentptr->next=prevptr;

        prevptr=currentptr;
        currentptr=nextptr;
    }
    return prevptr;
}

node* reverseRecursive(node* &head){

    if (head==NULL || head->next==NULL)
    {
        return head;
    }
    
    node* newhead= reverseRecursive(head->next);
    head->next->next=head;
    head->next=NULL;

    return newhead;
}*/
node* reversek(node* &head,int k){
    node* prevptr=NULL;
    node* currentptr=head;
    node* nextptr;

    int count=0;
    while (currentptr!=NULL && count<k)
    {
        nextptr= currentptr->next;
        currentptr->next=prevptr;
        prevptr=currentptr;
        currentptr=nextptr;
        count++;
    }
    if (nextptr!=NULL)
    {
        head->next=reversek(nextptr,k);
    }
    
    return prevptr;
}

int main()
{
    node* head=NULL;

    insertatTail(head,1);
    insertatTail(head,2);
    insertatTail(head,3);
    insertatTail(head,4);
    insertatTail(head,5);
    insertatTail(head,6);
    display(head);
    /*
    display(head);
    cout<<search(head,4)<<endl;

    deletion(head,3);

    display(head);

    deleteatHead(head);
    display(head);

    node* newhead=reverseRecursive(head);
    display(newhead);*/
    int k=2;
    node* newhead=reversek(head,2);
    display(newhead);

    return 0;
}