#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
bool checkSorted(int arr[],int size, int index){
    if(index>=size-1){
        return true;
    }
    else if(arr[index]<arr[index+1]){
        return checkSorted(arr,size,index+1);
    }
    else{
        return false;
    }
}
int vectorToNumber(vector <int>a,int index){  
    int ans=0;
    if(index>=a.size()){
        return ans+0;
    }   
    else{
    ans=(ans)*10+a[index];
    vectorToNumber(a,index+1);}
    return ans;



}
void printDigits(int n,vector<int>&v){
    if(n==0){
        return;
    }
    else{
        
        printDigits(n/10,v);
        // cout<<n%10<<" ";
        v.push_back(n%10);
    }
}
int main()

{

    // vector<int>v={1,2,3,4};
    int v[]={1,22,3,4};
    // printDigits(310,v);
    // for(int num:v){
    //     cout<<num<<" ";
    // }
    // int ans=0;
    // cout<<vectorToNumber(v,0);
    cout<<checkSorted(v,4,0);
    return 0;
}