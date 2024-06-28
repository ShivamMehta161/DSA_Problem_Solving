#include<iostream>
#include<limits.h>
#include<vector>
#include<queue>
using namespace std;
void interleaveQueue(queue<int> &first){
    // push one half to other queue
    int n=first.size();
    queue <int> second;
    for(int i=0;i<n/2;i++){
        int elem=first.front();
        first.pop();
        second.push(elem);

    }
    // Merge both the halves into the original queue first only
    for(int i=0;i<n/2;i++){
        int temp=second.front();
        second.pop();
        first.push(temp);
        int temp2=first.front();
        first.pop();
        first.push(temp2);

    }


}
int main()
{
    queue <int> first;
    first.push(10);
    first.push(20);
    first.push(30);
    first.push(40);
    first.push(50);
    first.push(60);
    interleaveQueue(first);
    while(!first.empty()){
        int temp= first.front();
        first.pop();
        cout<<temp<<" ";
        
    }
    return 0;
}