#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void findSubsequence(string s,string output,int index){
    if(index>=s.length()){
        cout<<output<<endl;
        return;
    }
    char a=s[index];
    // exclude
    findSubsequence(s,output,index+1);

    // include
    output.push_back(a);
    findSubsequence(s,output,index+1);
}

void FindSubsequence(string s,string output,int index){
    if(index>=s.length()){
        cout<<output<<endl;
        return;
    }
    char a=s[index];
    // include
    output.push_back(a);
    FindSubsequence(s,output,index+1);
    
    // exclude
    output.pop_back();
    FindSubsequence(s,output,index+1);

    
}
int main()
{   string b="xyz";

    FindSubsequence(b,"",0);
    return 0;
}