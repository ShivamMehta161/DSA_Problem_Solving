#include<iostream>
#include<limits.h>
#include<vector>
using namespace std;
int reverse(int n){
    int rev=0;int p;
    while(n!=0){
        p=n%10;
        rev=rev*10+p;
        n=n/10;
        // rev=n;

    }
    return rev;

}
int main()
{   cout<<reverse(-123);
    return 0;
}