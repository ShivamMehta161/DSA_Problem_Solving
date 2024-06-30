#include<iostream>
#include<limits.h>
#include<vector>
#include<queue>
#include<stack>
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
// it returns root node of the created tree
// -1 when we dont want to create the node
// and value when we want to create node
Node* createTree(){
    // cout<<"Enter value"<<endl;
    int data;
    cin>>data;
    if(data==-1){
        return NULL;
    }
    // Step 1
    Node* root=new Node(data);
    //Step 2 create left subtree
    // cout<<"Enter value for left of the node"<<root->data<<endl;
    root->left = createTree();
    //Step 3 create right subtree
    // cout<<"Enter value for right of the node"<<root->data<<endl;
    root->right = createTree();

    return root;
}
void preorder(Node *root){
    if(root==NULL){
        return ;
    }
    // NLR
    cout<<root->data<<" ";

    preorder(root->left);
    preorder(root->right);
}
void inorder(Node* root){
   // LNR
   if(root==NULL){
    return;
   }
   inorder(root->left);
   cout<<root->data<<" ";
   inorder(root->right);
}
void postorder(Node* root){
    if(root==NULL){
        return;
    }
    // LRN
    postorder(root->left);
    postorder(root->right);
    cout<<root->data<<" ";
}
void levelOrderTraversal(Node* root){
    queue<Node*> q;
    q.push(root);

    while(!q.empty()){
        Node * front=q.front();
        q.pop();

        cout<<front->data<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
    }
}
void levelOrderTraversalPrint(Node* root){
    if(root==NULL) return;
    queue <Node*> q;
    q.push(root);
    q.push(NULL);

    while(q.size()>1){
        Node * front=q.front();
        q.pop();

        // cout<<front->data<<" ";
        if(front==NULL){
            cout<<endl;
            q.push(NULL);
        }
        else{
        cout<<front->data<<" ";
        if(front->left!=NULL){
            q.push(front->left);
        }
        if(front->right!=NULL){
            q.push(front->right);
        }
        
        }
    }    

}
void levelOrderTraversalPrint1(Node* root) {
    if (root == NULL) return;
    
    queue<Node*> q;
    q.push(root);
    q.push(NULL);

    while (q.size() > 1) {
        Node* front = q.front();
        q.pop();

        if (front == NULL) {
            cout << endl;
            q.push(NULL);
        } else {
            cout << front->data << " ";
            if (front->left != NULL) {
                q.push(front->left);
            }
            if (front->right != NULL) {
                q.push(front->right);
            }
        }
    }
}

int main()
{   
    Node * root = createTree();
    cout<<"preorder : ";preorder(root);cout<<endl;
    cout<<"inorder  : ";inorder(root);cout<<endl;
    cout<<"postorder: ";postorder(root);cout<<endl;
    cout<<"Level Order: "<<endl; levelOrderTraversalPrint1(root);cout<<endl;
    levelOrderTraversalPrint(root);
    return 0;
}
// 10 20 40 90 -1 -1 -1 50-1 -1 30 -1 60 70 -1 -1 80 -1 -1