    #include<iostream>
    #include<limits.h>
    #include<vector>
    #include<stack>
    using namespace std;
    void solve(stack <int> &st,int &pos,int &ans){
        if(pos==1){
            // return st.top();
            ans=st.top();   
            st.top();
        }
        pos--;
        int temp=st.top();
        st.pop();
        solve(st,pos,ans);
        st.push(temp);


    }
    int getMiddle(stack<int>&st){
        if(st.empty()){
            return -1;
        }
        
            int size=st.size();
            int pos=(size+1)/2;
            // if(size & 1){
            //     //odd
            //     pos=size/2+1;
            // }
            // else{
            //     //even
            //     pos=size/2;
            // }

            int ans=-1;
            solve(st,pos,ans);
        return ans;

            
    }
    int main()
    {   
        stack<int> st;
        st.push(10);
        st.push(20);
        st.push(30);
        st.push(40);
        int ans=-1;
        int mid=getMiddle(st);
        cout<<mid;
        return 0;
    }
