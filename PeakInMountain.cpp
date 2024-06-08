#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int FindPeakinArray(vector<int>a){      
    int start=0;
    int end=a.size()-1;
    int mid=start/2+end/2;
    // int ans=-1;
    while(start<end){
        mid=start/2+end/2;
        if(a[mid]<a[mid+1]){
            start=mid+1;

        }
        
        else{
            end=mid;


        }
        
        }
    return end;
    }


int main()
{   vector<int>a={10,20,30,90,70,60,50,40};
    cout<<FindPeakinArray(a);
    return 0;
}