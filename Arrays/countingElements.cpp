class Solution{
  public:
    vector<int> countEleLessThanOrEqual(int arr1[], int arr2[], 
                                 int m, int n)
    {
        vector<int>ans;
        unordered_map<int, int>mp;
        for(int i = 0; i < n; i++){
            mp[arr2[i]]++;
        }
        for(int i = 0; i < m; i++){
            int val = arr1[i], count = 0;
            while(val--){
                count += mp[val];
            }
            ans.push_back(count);
        }

        return ans;
    }
};