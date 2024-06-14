#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void printPermuatation(string &s ,int index){
    if(index>=s.length()){
        cout<<s<<endl;
        return;
    }
    for(int j=index;j<s.length();j++){
        // cout<<j<<" "<<s<<endl;
        swap(s[j],s[index]);
        printPermuatation(s,index+1);
        swap(s[j],s[index]);
    }



}
int main()
{
    string a="abcd";
    printPermuatation(a,0);
    return 0;
}