#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void rotate(vector <int> &nums){
    int temp=nums[nums.size()-1];
    for(int i=nums.size()-1;i>=0;i--){
        nums[i]=nums[i-1];
    }
    nums[0]=temp;
}
int main()
{   vector <int>a={1,2,3,4};
// rotate(a);
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}cout<<endl;

// rotateByk(a,1);
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
// rotateByk(a,2);
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
cout<<endl;
// rotateByk(a,3);
for(int i=0;i<a.size();i++){
    cout<<a[i]<<" ";
}
    return 0;
}
