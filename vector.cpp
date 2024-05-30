#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int main()
{   vector<int> a;
// cout<<a.size();
// //2D Vector
// vector< vector <int> > arr(5,vector <int>(10,0));
// for(int i=0;i<arr.size();i++){
//     for(int j=0;j<arr[i].size();j++){
//         cout<<arr[i][j]<<" ";
//     }
//     cout<<endl;

// }

// 1D Array vector
// vector<int> A;
// A.push_back(1);
// A.pop_back();

// 2 D Vector

vector<vector <int> > brr(5,vector<int>(4,9));
for(int i=0;i<brr.size();i++){
    for(int j=0;j<brr[i].size();j++){
        cout<<brr[i][j];

    }
cout<<endl;

}



cout<<endl;


// Jagged array.
vector<vector<int>>B;
vector<int>b1(5,1);
vector<int>b2={1,2,3,4,5};
vector<int>b3(9,-9);
B.push_back(b1);
B.push_back(b2);
B.push_back(b3);
for(int i=0;i<B.size();i++){
    for(int j=0;j<B[i].size();j++){
        cout<<B[i][j];

    }
cout<<endl;

}

    return 0;
}
