/*
Input: 
N = 7, price[] = [100 80 60 70 60 75 85]
Output:
1 1 1 2 1 4 6
*/

class Solution
{
    public:
    //Function to calculate the span of stockâ€™s price for all n days.
    vector <int> calculateSpan(int price[], int n)
    {
       vector<int>ans;
       stack<pair<int , int>>st; // element and countSmallerThanIt
       for(int i = 0; i < n; i++){
        
        int days = 1;
        while(!st.empty() && st.top().first <= price[i]){
            // means st.top is smaller and we can pick it up
            days += st.top().second;
            st.pop();
        }
        st.push({price[i], days});
        ans.push_back(days);
       }
       return ans;

    }
};