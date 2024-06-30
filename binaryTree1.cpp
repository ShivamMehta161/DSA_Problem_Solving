#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
class Node{
    public:
    int data;
    Node* left;
    Node* right;
    Node(int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;

    }
};
Node* createTree(){
    int data;cin>>data;
    if(data==-1){
        return NULL;
    }
    Node* root=new Node(data);
    root->left=createTree();
    root->right=createTree();
}
int main()
{   
    Node* root=createTree();
    
    return 0;
}