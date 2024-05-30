#include<iostream>
#include<vector>
using namespace std;
void print(vector<int>v){
    int size=v.size();
    for(int i=0;i<size;i++){
        cout<<v[i]<<endl;
        // cout<<v.at(i)<<endl;
    }
}
int main()
{   //Static Memory allocation
    // int a[5]={1,2,3,4,5};

    //Dyanmic Memory allocation
    // int n=5;   
    // int *a=new int[n];

// In vector , dont tell the size
//    just keep on inserting 
// size = The number of values you have put in the vector. v.size()
// capacity= capacity is how much more you can push. if vector is full, then capacity will be doible the size. v.capacity()

vector<int>v;
v.push_back(1);   
v.push_back(3);
v.push_back(4);
print(v);
cout<<endl;
v.pop_back();
print(v);
cout<<v.front()<<endl;
cout<<v.back();

    
    
    return 0;
}



