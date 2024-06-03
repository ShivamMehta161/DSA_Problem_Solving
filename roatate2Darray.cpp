#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void print2Dvector(vector<vector<int>>a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    
    }
}

void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        for(int i=0;i<matrix.size();i++){
            for(int j=i;j<matrix.size();j++){
                swap(matrix[i][j],matrix[j][i]);
            }
        }
        for(int i=0;i<n;i++){
            for(int j=0;j<n/2;j++){
                swap(matrix[i][j],matrix[i][n-j-1]);
            }
        }
        // return matrix;
    }
int main()
{   vector<vector<int>> a;
    vector<int> a1={1,2,3,4};
    vector<int> a2={5,6,7,8};
    vector<int> a3={9,10,11,12};
    vector<int> a4={13,14,15,16};
    a.push_back(a1);
    a.push_back(a2);
    a.push_back(a3);
    a.push_back(a4);
    print2Dvector(a);
    cout<<endl;
    rotate(a);
    print2Dvector(a);
    return 0;
}