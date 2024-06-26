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
int main()
{
    queue <int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    q.push(50);
    // reverseQueue(q);
    reverse(q);
    while(!q.empty()){
        int ele=q.front();
        cout<<ele<<" ";
        q.pop();
    }

    return 0;
}