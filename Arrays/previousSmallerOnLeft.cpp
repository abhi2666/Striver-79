/*
Previous smaller element on left can be done easily using a two nested loops
where for each element we go and check the element on the left of the array
and find the nearest smaller element.

Optimised approach --> we can use stack to store the elements or elements 
smaller than the current element. For each element we will look for element 
that is smaller than it and is in the stack and will remove the element from 
stack is its not smaller than current element.
*/

class Solution{
public:
    vector<int> leftSmaller(int n, int a[]){
        vector<int>ans(n, -1);
        stack<int>st;
        for(int i = 0; i < n; i++){
            while(!st.empty()){
                if(st.top() < a[i]){
                    ans[i] = st.top();
                    st.push(a[i]);
                    break;
                }
                else{
                    st.pop();
                }
            }
            st.push(a[i]);
        }
        return ans;
    }
};