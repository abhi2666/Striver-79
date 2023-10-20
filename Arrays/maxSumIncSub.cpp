// Input: 
// N = 5, arr[] = {1, 101, 2, 3, 100} 
// Output: 
// 106
// Explanation:
// The maximum sum of a increasing sequence is obtained from {1, 2, 3, 100},

ass Solution{
	public:
	int maxSumIS(int arr[], int n)  
	{  
	    int maxi = INT_MIN, currMax = 0;
        for(int i = 0; i < n; i++)
        {
            currMax += arr[i];
            maxi = max(currMax, maxi);
            if(arr[i] > arr[i + 1]){
                int k = i;
                while(arr[i] > arr[i + 1]){
                    
                }
            }
        }
        return maxi;
	}  
};
