/*
You will have to inc. and dec. the heights of every tower and check if that makes 
them the smallest or largest tower then update the minTow and maxTow value and 
calculate the new difference else keep the original value
*/

class Solution {
  public:
    int getMinDiff(int arr[], int n, int k) {
        sort(arr, arr+n);
        int smallest = arr[0]+k;
        int largest = arr[n-1]-k;

        int minTower, maxTower, ans = arr[n-1]-arr[0];
        for(int i = 0; i < n-1; i++){
            // try to find new smallest or largest
            minTower = min(smallest, arr[i+1]-k);
            maxTower = max(largest, arr[i]+k);
            if(minTower < 0) continue;
            ans = min(ans, maxTower-minTower);
        }
        return ans;
    }
};