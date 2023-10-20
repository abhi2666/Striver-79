class Solution {
private:

    bool isPossible(vector<int>&piles, int ele, int h){
        long int val = 0;
        for(auto it : piles){
            val += ceil(double(it)/double(ele));
        }
        if(val <= h) return true;
        else return false;
    }
    
    int maxElement(vector<int>piles){
        int maxi = INT_MIN;
        for(auto it : piles) maxi = max(maxi, it);
        return maxi;
    }
public:
    int minEatingSpeed(vector<int>& piles, int h) {
        /// find the min value which represents the no. of bananas koko
        // has to eat in order to eat all the bananas in piles within
        // h time
        int low = 1;
        int high = maxElement(piles);
        // will apply binary search from 1 to high reason is because
        // k will lie in 1 to max(element) in always and we don't really 
        // have any reason to go after max(element) in binary search window.
        int mid = 0, ans = -1;
        while(low <= high){
            mid = (low + high)/2;
            // chcek if mid can be a possible answer
            if(isPossible(piles, mid, h)){
                ans = mid;
                high = mid - 1;
            }
            else{
                // if current is not possible then we will have to increaes the count of
                // bananas to eat every hour..
                low = mid + 1;
            }
        }

        return ans;
    }
};