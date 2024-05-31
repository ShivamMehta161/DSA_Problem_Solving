#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
// Negative numbers at left and positive at right side of array.
void fun(int *arr,int size){
    int j=0;
    for(int i=0;i<size;i++){
        if(arr[i]<0){
            swap(arr[i],arr[j]);
            j++;
        
        }
    }
}
int main()
{   int a[5]={1,5,0,9,-10};
    fun(a,5);
    for(int i=0;i<5;i++){
        cout<<a[i]<<" ";
    }
    return 0;
}