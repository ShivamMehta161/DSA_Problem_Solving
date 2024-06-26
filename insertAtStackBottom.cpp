#include<iostream>
#include<limits.h>
#include<vector>
#include<stack>
using namespace std;
void insertAtBottom(stack <int> &st,int &element){
    if(st.empty()){
        st.push(element);
        return;
    }
    int temp=st.top();
    st.pop();
    insertAtBottom(st,element);
    st.push(temp);
}

int main()
{
    stack<int> st;
    st.push(10);
    st.push(20);
    st.push(30);
    st.push(40);
    int a =400;
    insertAtBottom(st,a);
    while(!st.empty()){
       cout<<st.top()<<" "<<endl;
       st.pop();

    }
    return 0;
}