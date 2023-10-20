class Solution
{
public:
    // Function to find all possible unique subsets.
    void getSubsets(int n, vector<int> &a, vector<int> &ds, set<vector<int>> &st)
    {
        if (n < 0)
        {
            st.insert(ds);
            return;
        }

        // pick and not pick
        ds.push_back(a[n]);
        getSubsets(n - 1, a, ds, st);
        ds.pop_back();
        getSubsets(n - 1, a, ds, st);
    }
    vector<vector<int>> AllSubsets(vector<int> arr, int n)
    {
        vector<vector<int>> ans;
        vector<int> ds;
        set<vector<int>> st;
        sort(arr.begin(), arr.end());
        getSubsets(n - 1, arr, ds, st);
        for (auto it : st)
        {
            ans.push_back(it);
        }
        return ans;
    }
};