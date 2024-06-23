#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
class Node{
    public:
    int data;Node* next;
    Node(){
        // cout<<"Default Constructor";
        this->next=NULL;

    }
    Node(int data){
        // cout<<"Parameterised Constructor"<<endl;
        this->data=data;
        this->next=NULL;
    }

};
void printLL(Node* head){
    Node* temp=head;

    while(temp!=NULL){
        cout<<temp->data<<"->";
        temp=temp->next;
    }

}
int LL_length(Node* head){
    int n=0;
    Node* temp=head;
    while(temp != nullptr){
        n++;
        temp=temp->next;
    }
    return n;
}
// void printLLRecursive(Node* head){
//     // Node* temp=head;
//     if(head==nullptr){
//         cout<<temp->data;
//         return;
//     }
//     // printLLRecursive(temp);
//     cout<<temp->data<<" -> ";
//     temp=temp->next;
//     printLLRecursive(temp);
// }
void ReverseprintLLRecursive(Node* head){
    Node* temp=head;
    if(temp==NULL){
        // cout<<"NULL";
        return;
    }
    // printLLRecursive(temp);
    
    temp=temp->next;
    ReverseprintLLRecursive(temp);
    cout<<temp->data<<" -> ";
}
void insertAtHead(Node* &head,Node* &tail,int value){
 
 if(head==NULL){
    Node* newNode1=new Node(value);
    head=newNode1;
    tail=newNode1;
 }
 else{
    Node* newNode=new Node(value);
    newNode->next=head;
    head=newNode;
 }

    
    // s->next=head;

}
void insertAtTail(Node * &head,Node * &tail,int value){
    if(head==NULL){
        Node* newNode=new Node(value);
        head=newNode;tail=newNode;

    }
    else{
        Node * newNode=new Node(value);
        tail->next=newNode;
        tail=newNode;
    }
}
int main()
{   
    Node* head=NULL;
    Node* tail=NULL;
    insertAtHead(head,tail,10);
    insertAtHead(head,tail,20);
    insertAtTail(head,tail,30);
    insertAtTail(head,tail,50);
    printLL(head);
    //Static
    // Node a;
    // Node* a=new Node(10);
    // Node* b=new Node(20);
    // Node* c=new Node(30);
    // Node* d=new Node(40);
    // Node* e=new Node(50); 
    // a->next=b;
    // b->next=c;
    // c->next=d;
    // d->next=e;
    // // e->next=b;
    // Node* head=a;
    // Node* tail=e;
    // // printLLRecursive(a);
    // cout<<LL_length(head);
    // cout<<endl;
    // // Node* s=new Node(60);
    // insertAtHead(head,tail,60);
    // printLL(head);cout<<endl;

    // // Node* t=new Node(70);
    // insertAtHead(head,tail,70);
    // printLL(head);cout<<endl;

    // insertAtHead(head,tail,600);
    // printLL(head);cout<<endl;

    // insertAtTail(head,tail,1600);
    // printLL(head);cout<<endl;
 
    // // ReverseprintLLRecursive(a);
    return 0;
}