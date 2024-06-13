#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// arr={1,2,2,4,5}
// bool checkPalindrome(string s,int index){
//     if

// }
vector<int> AllOccurencies(int arr[],int size,int index,int target){ 
    vector <int> v;
    if(index>=size){
        return vector<int>();
    }
    else if(arr[index]==target){
        // cout<<index<<" ";
        v.push_back(arr[index]);
        AllOccurencies(arr,size,index+1,target);
      
        // printAllOccurencies(arr,size,index+1,target);
    }
    else{
        AllOccurencies(arr,size,index+1,target);

    // printAllOccurencies(arr,size,index+1,target);
}   return v;

    }
void printAllOccurencies(int arr[],int size,int index,int target){ 
    if(index>=size){
        return;
    }
    else if(arr[index]==target){
        cout<<index<<" ";
        printAllOccurencies(arr,size,index+1,target);
    }
    else{
    printAllOccurencies(arr,size,index+1,target);
}}

void doubleElements(int arr[],int size,int index){
    if(index>=size){
        return;
    }
    else{
        arr[index]=arr[index]*2;
        doubleElements(arr,size,index+1);
    }
}
void solve(int arr[],int size,int index,vector<int>&v){
    if(index>=size){
        return;
    }
    if(arr[index]%2==0){
        v.push_back(arr[index]);
        solve(arr,size,index+1,v);
    }
    else{
        solve(arr,size,index+1,v);
    }
}
void printVector(vector<int>a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
// int findMinimum(int arr[],int size,int index){
//     if(index==size-1){
//         return arr[index];
//     }
//     else if(){
        
//     }
// }
int linearSearch(int arr[],int size,int index,int target){
    if(index>=size){
        return -1;
    }
    if(arr[index]==target){
        return index;
    }
    else {
        return linearSearch(arr,size,index+1,target);
    }
}
void printArray(int arr[],int size,int index){
    if(index==size-1){
        cout<<arr[index]<<" ";
    }
    else{
        
    cout<<arr[index]<<" ";    
    printArray(arr,size,index+1);
    
    }
}
int pow(int n,int e){
    // to find n^e
    if(e==1){
        return n;
    }
    else{
        return n*pow(n,e-1);
    }
}
int fact(int n){
    if(n==0 || n==1){
        return 1;
    }
    else {
        return n*fact(n-1);
    }
}
void reverseCounting(int n){
    if(n==1){
        cout<<1<<endl;return;
    }
    cout<<n<<endl;
    reverseCounting(n-1);
}
void Normalcounting(int n){
    if(n==1){
        cout<<1<<endl;return;
    }

    Normalcounting(n-1);
    cout<<n<<endl;
}
int sum(int n){
    if(n==1){
        return 1;
    }
    else if(n==0){
        return 0;
    }
    else{
        return n+sum(n-1);
    }
}
void printNtimes(string s,int n,int i ){
    if(i>n){
        return;
    }
    cout<<s<<endl;
    printNtimes(s,n,i+1);
}
void reverseArray(vector<int>&arr,int size,int left,int right){
    if(left>=right){
        return;
    }
    swap(arr[left],arr[right]);
    reverseArray(arr,size,left+1,right-1);
}

int main(){
// {   cout<<fact(7);
// Normalcounting(7);
// cout<<pow(2,5);
// // cout<<sum(10);
// int arr[5]={1,2,1,1,5};
// int maxi=INT_MIN;

// printArray(arr,5,0);
    // cout<<linearSearch(arr,5,0,13);
    // vector<int>a;

    // solve(arr,5,0,a);
    // printVector(a);
    // doubleElements(arr,5,0);
    // printArray(arr,5,0);
    // Arraymax(arr,5,0,&maxi);
    // cout<<maxi;
// // printAllOccurencies(arr,5,0,1);
// vector<int>a=AllOccurencies(arr,5,0,1);
// printVector(a);
// printNtimes("ABCD",5,1);
    vector<int> a={1,2,3,4,5,6};
    int size=a.size();
    reverseArray(a,size,0,size-1);
    for(int elem: a){
        cout<<elem<<" ";
    }
    
    
    return 0;
}