#include<iostream>
#include<limits.h>
#include<vector>
#include<deque>
using namespace std;
int main()  
{   
    deque <int> dq;
    dq.push_back(10);
    dq.push_front(20);
    cout<<dq.size()<<endl;
    // dq.pop_back();
    dq.pop_front();
    cout<<"Front: "<<dq.front()<<endl;
    cout<<"Back: "<<dq.back()<<endl;
    return 0;
}