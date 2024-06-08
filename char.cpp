#include<iostream>
#include<limits.h>
#include<string.h>
#include<vector>
using namespace std;
void removeNonAlpha(string &s){
        int i=0;
        while(s[i]!='\0'){
            if(!((s[i]>='a' && s[i]<='z') || (s[i]>='A' && s[i]<='Z') || (s[i]>='0' && s[i]<='9'))){
                s.erase(i,1);
            }
            else{
            i++;}
        }
    }
int length(char a[], int size){
    int l=0;
    for(int i=0;i<size;i++){
        if(a[i]=='\0'){
            break;
        }
        else{
            l++;
        }
    }
    return l;


}
void reverse(char a[],int n){
    int i=0;
    int j=n-1;
    while(i<=j){
        swap(a[i],a[j]);
        i++;
        j--;
        
      
    
    }
}
void Capitalise(char a[],int size){

    for(int i=0;i<size;i++){
        if(a[i]>='a' && a[i]<'z'){
            a[i]=a[i]-32;
        }
    }
}
void Lowerise(char a[],int size){

    for(int i=0;i<size;i++){
        if(a[i]>='A' && a[i]<'Z'){
            a[i]=a[i]+32;
        }
    }
}
void ReplaceWithSpace(char a[],int size){
    for(int i=0;i<strlen(a);i++){
        if(a[i]=='@'){
            a[i]=' ';
        }
    }
}
bool checkPalindrome(char a[],int size){
    bool ans=false;
    int i=0;int j=size-1;
    for (int k=0;k<size;k++){
        if(a[i]==a[j]){
            ans=true;
            i++;j--;
        }
        else{
            return false;
        }
    }
    return ans;
}
string removeDuplicates(string s){
    int i=0;
    string ans="";
    // ans[0]=s[0];
    while(s[i]!='\0'){
        if(ans.length()>0 && ans[ans.length()-1]==s[i]){
            ans.pop_back();
        }
        else{
            ans.push_back(s[i]);
        }
        
        
        
        i++;
            }
    return ans;
}
int main(){
// {   char a[100];
//     // cin>>a;
//     char b[100];
//     cin.getline(b,14);
//     // cout<<"Value of a : "<<a<<endl;
//     cout<<"Value of b : "<<b<<endl;
//     cout<<"Length of b : "<<length(b,100)<<endl;
//     cout<<"Length of b : "<<strlen(b)<<endl;
    // char bi[100];
    // cin>>bi;
    // reverse(bi,strlen(bi));
    // cout<<bi<<endl;
    // cout<<int('A')<<" "<<int('a'); 
    // cout<<int('Z')<<" "<<int('z'); 
    // char ab[100],d[100];
    // cin>>ab;cin>>d;
    // int len=strlen(ab);
    // Capitalise(ab,len);
    
    // cout<<ab;
    // cout<<endl;
    // Lowerise(d,strlen(d));
    
    // cout<<d;
//Replace @ with space
// char b[]="My@name@is@xyz.";
// int len=strlen(b);
// // ReplaceWithSpace(b,len);
// // cout<<endl;
// // cout<<b;
// cout<<checkPalindrome();
// char a[]="bab";
// cout<<checkPalindrome(a,3);
string l="a abbc#%";
removeNonAlpha(l);
cout<<l;
    return 0;   
}