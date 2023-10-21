/*
Given a cyclic array, find the next greater element for every element 
and return that array.
Sample Input 1:
5
1 5 3 4 2


Sample Output 1:
5 -1 4 -1 -1

*/
#include<bits/stdc++.h>
vector<int> nextGreaterElement(vector<int>& arr, int n)
{
    vector<int>ans(n, -1);
    stack<int>st; // will store the elements from right elements
    for(int i = 2*n-1; i >= 0; i--){
        // remove elements from stack that is smaller than current element
        while(!st.empty() && st.top() <= arr[i%n]){
            st.pop();
        }
        if(i < n){
            // because we want the NGE for elements from 0 to n-1 only
            if(!st.empty()){
                ans[i%n] = st.top();
            }
        }
        // now put the current element in the stack 
        st.push(arr[i%n]);
    }
    return ans;
}