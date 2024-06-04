#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int binarySearch(vector <int> a,int target){
    int start=0;int end=a.size();int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==target){
            return mid;
        }
        else if(a[mid]>target){
            end=mid-1;
            mid=(start+end)/2;
        }
        else{
            start=mid+1;
            mid=(start+end)/2;
        }
    }
    return -1;
}
int FindFirstOccurence(vector<int>arr,int target){
    int FirstIndex=-1;
    int start=0;
    int end=arr.size()-1;
    int mid=(start+end)/2;
    while(start<=end){
        if(arr[mid]==target){
            FirstIndex=mid;
            end=mid-1;
        }
        else if(arr[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
        mid=(start+end)/2;
    }
    return FirstIndex;

}
int FindLastOccurence(vector<int>a,int target){
    int LastIndex=-1;
    int start=0;
    int end=a.size();
    int mid=(start+end)/2;
    while(start<=end){
        if(a[mid]==target){
            LastIndex=mid;
            start=mid+1;
    
        }
        else if(a[mid]>target){
            end=mid-1;
        }
        else{
            start=mid+1;
        }
    mid=(start+end)/2;
    }
    return LastIndex;
}
int linearSearch(vector<int>a,int target){
    for(int i=0;i<a.size();i++){
        if(a[i]==target){
            return 1;
        }
        // return 0;
    }
    return 0;
}
int main()
{   vector <int> a={1,3,2,3,3,49,57};
    cout<<linearSearch(a,6)<<endl;    
    cout<<binarySearch(a,49)<<endl;    
    cout<<FindFirstOccurence(a,3)<<endl;
    cout<<FindLastOccurence(a,3)<<endl;
    // for(int i=0;i<out.size();i++){
    //         cout<<out[i]<<" ";
    // }
    return 0;
}