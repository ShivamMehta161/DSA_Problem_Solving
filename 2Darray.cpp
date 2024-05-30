#include<iostream>
#include<limits.h>
using namespace std;

void FindTranspose(int A[][3],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=i;j<column;j++){
            if(i!=j){
                int temp=A[i][j];
                A[i][j]=A[j][i];
                A[j][i]=temp;

            }
        }
    }
}
int findMin(int A[][4],int row,int column){
    int min=INT_MAX;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(A[i][j]<min){
                min=A[i][j];
            }
        }
    }
    return min;

}
int findMax(int A[][4],int row,int column){
    int max=INT_MIN;
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(A[i][j]>max){
                max=A[i][j];
            }
        }
    }
    return max;

}
bool searchElement(int A[][4],int row,int column,int target){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            if(A[i][j]==target){
                return true;
            }
        }
    }
    return false;
}
//Accessing 2d matrix column wise
void print(int A[][3],int row,int column){
    for(int i=0;i<row;i++){
        for(int j=0;j<column;j++){
            cout<<A[j][i]<<" ";
        }
        cout<<endl;
    }
}
int main()
{   int A[][3]={
            {1,2,3},{4,5,6},{7,8,9}

};
// print(A,3,4);
// cout<<endl;
// cout<<searchElement(A,3,4,55)<<endl;
// cout<<findMax(A,3,4)<<endl;
// cout<<findMin(A,3,4)<<endl;
// // FindTranspose();
FindTranspose(A,3,3);
print(A,3,3); 
    return 0;
}