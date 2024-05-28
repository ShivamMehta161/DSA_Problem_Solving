#include<iostream>
using namespace std;
int main(){
    int a[5]={1,2,2,1,3};
    int ans=a[0];
    for (int i=1;i<5;i++){
        ans=a[i]^ans;
    }
    cout<<ans;
    return 0;

}