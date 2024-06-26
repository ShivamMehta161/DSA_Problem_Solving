#include<iostream>
#include<limits.h>
#include<vector>
#include<stack>
using namespace std;
int main(){
// {   stack<int>st;
//     st.push(1);
//     st.push(2);st.push(4);
//     cout<<st.size()<<endl;
//     cout<<st.top()<<endl;
//     st.pop();
//     cout<<st.top()<<endl;
//     if(st.empty()){
//         cout<<"Empty stack";
//     }
//     else{
//         cout<<"Non empty stacks";
//     }
    string s="shivam";
    stack <char> s_stack;
    for(int i=0;i<s.length();i++){
        s_stack.push(s[i]);
    }
    while(! s_stack.empty()){
    
    cout<<"|"<<s_stack.top()<<"|"<<endl;
    s_stack.pop();
    }
    return 0;
}