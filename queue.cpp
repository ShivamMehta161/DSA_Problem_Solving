#include<iostream>
#include<limits.h>
#include<vector>
#include<queue>
using namespace std;
int main()
{   queue<int> q;
    q.push(10);
    q.push(20);
    q.push(30);
    q.push(40);
    cout<<"Front: "<<q.front()<<"\n";
    cout<<"Last: "<<q.back();
    cout<<endl<<"After deletion";
    q.pop();
    cout<<"Front: "<<q.front()<<"\n";
    cout<<"Last: "<<q.back();
    return 0;
}  