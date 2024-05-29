#include<iostream>
using namespace std;
void PrintAllPairs(int a[],int n){
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            cout<<"("<<a[i]<<","<<a[j]<<") ";
        }
        cout<<endl;
    }
}
int main(){
    int a[3]={1,2,3};
    PrintAllPairs(a,3);
}