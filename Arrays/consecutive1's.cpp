/*
class Solution{
public:
	// #define ll long long
	ll countStrings(int n) {
	    // code here
	}
};
*/

// cannot pick consecutive 1's so we will take a prev argument also

class Solution{

public:
	// #define ll long long
    ll getCombinations(int prevPicked, int n, vector<int>&dp)
    {
        // base case....
        if(n == 0){
            return 1;
        }

        // can pick 1 or can pick zero
        // if prevPicked is 1 then you cannot pick 1
        if(dp[n] != -1) return dp[n];
        ll pickOne = 0;
        if(prevPicked!=1){
            // can pick a 1
            pickOne = getCombinations(1, n-1);
        }
        ll pickZero = getCombinations(0, n-1);

        return dp[n] = pickOne + pickZero;
    }

	ll countStrings(int n) {
        vector<int>dp(n+1, -1);
        return getCombinations(-1, n, dp);     
    }
};




list [2, 3, 4, 5, 6], k = 5