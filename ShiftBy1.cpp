#include<iostream>
using namespace std;
void ShiftBy1(int *a,int size){
    int temp=a[size-1];
    for(int i=size-1;i>=0;i--){
        a[i]=a[i-1];
        
    }
    a[0]=temp;
}
int main(){
    int a[4]={1,2,3,4};
    ShiftBy1(a,4);
    for(int i=0;i<4;i++){
        cout<<a[i]<<" ";
    }

}