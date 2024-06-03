// 
#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
void print1Dvector(vector <int> a){
    for(int i=0;i<a.size();i++){
        cout<<a[i]<<" ";
    }
}
void print2Dvector(vector<vector<int>>a){
    for(int i=0;i<a.size();i++){
        for(int j=0;j<a[i].size();j++){
            cout<<a[i][j]<<" ";

        }
        cout<<endl;
    
    }
}

    vector<int> rowAndMaximumOnes(vector<vector<int>>& mat) {
        // int row
        int maxCount=0;
        
        int minRow=0;
        for(int i=0;i<mat.size();i++){
            int Count1=0;
            for(int j=0;j<mat[i].size();j++){
                if(mat[i][j]==1){
                    Count1++;
                }
            }
            if(Count1>maxCount){
                maxCount=Count1;
                minRow=i;
            }
        }
        return {minRow,maxCount};
    }

int main()
{   //1D vector
    // vector <int> a={3,4,5,2};
    // a.push_back(4);
    // a.push_back(6);
    // print1Dvector(a);
    // cout<<endl;

    // a.pop_back();
    // print1Dvector(a);
    // //2D Vector
    // cout<<endl;
    
    // vector <vector<int>> b(5,vector <int> (7,5));
    // print2Dvector(b);
    
    // print2Dvector(b);
    // vector<vector <int>> a;
    // vector<int>a1(6,0);
    // vector<int>a2(16,1);
    // a.push_back(a1); 
    // a.push_back(a2);
    // print2Dvector(a);
    vector <vector<int>> b;
    vector<int> b1={0,1,1};
    vector<int> b2={1,1,1};
    b.push_back(b1);
    b.push_back(b2);
    print2Dvector(b);
    cout<<endl;
    vector<int> output=rowAndMaximumOnes(b);
    print1Dvector(output);
    return 0;
}