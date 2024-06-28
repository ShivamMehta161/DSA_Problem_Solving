#include<iostream>
#include<limits.h>
#include<vector>
#include<stack>
#include<queue>
using namespace std;
void reverseQueue(queue <int> &q){
    stack<int> s;
    while(!q.empty()){
        int frontElement=q.front();
        q.pop();
        s.push(frontElement);
    }
    while(!s.empty()){
        int topElement=s.top();
        s.pop();
        q.push(topElement);
    }


}
void reverse(queue<int> &q){
    if(q.empty()){
        return ;
    }
    int frontEle=q.front();
    q.pop();
    reverse(q);
    q.push(frontEle);


}
// reverse first k elements of queue
void reverseKelements(queue<int> &q,int k){
    // q= 10 20 30 40 50 60
    stack <int> st;
    //push first k elements in stack
    for(int i=0;i<k;i++){
        int elem=q.front();
        q.pop();
        st.push(elem);
    }
    // from stack to queue
    // 40 50 60 30 20 10
    for(int i=0;i<k;i++){
        int elem=st.top();
        st.pop();
        q.push(elem);
    }int size=q.size();
    for(int i=0;i<size-k;i++){
        int elem=q.front();
        q.pop();
        q.push(elem);
    }
}
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    q.push(60);
    // reverseQueue(q);
    // reverse(q);
    // 10 20 30 40 50
    // 30 20 10 40 50
    reverseKelements(q,4);
    while(!q.empty()){
        int ele=q.front();
        cout<<ele<<" ";
        q.pop();
    }

    return 0;
}