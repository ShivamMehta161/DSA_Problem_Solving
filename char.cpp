#include<iostream>
#include<limits.h>
#include<string.h>
#include<vector>
using namespace std;
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
void ReplceWithSpace(char a[],int size){
    
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
char b[]="My@name@is@xyz.";
int len=strlen(b);
ReplaceWithSpace(b,len);
    return 0;   
}