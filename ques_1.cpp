#include <iostream>
#include <algorithm>
#include <bits/stdc++.h>
#include <vector>
#include <stack>

using namespace std;

void leader(vector<int> &arr){
    int n = arr.size();
    vector<int> res;

    stack<int> st;

    for (int i=n-1;i>=0;i--){
        while(!st.empty() && arr[i]>st.top()){
            st.pop();
        }
        if (st.empty()) res.push_back(arr[i]);
        st.push(arr[i]);
    }

    reverse(res.begin(),res.end());

    if (res.size()==0) cout<<"NO LEADER"<<endl;

    for (int i=0;i<res.size();i++){
        cout<<res[i]<<" ";
    }

}

int main() {
    int n;
    cin>>n;
    vector<int> arr;
    for (int i=0;i<n;i++){
        int x;
        cin>>x;
        arr.push_back(x);
    }

    leader(arr);

    return 0;
}
