class Solution{
    public:
    // This function wants you to modify the given input
    // array and no need to return anything
    // arr: input array
    // n: size of array
    //Function to rearrange  the array elements alternately.
    void rearrange(long long *arr, int n) 
    { 
    	
    	for(int i = 0; i < n;){
            for(int j = 0; j < n-1; j++){
                swap(arr[j], arr[n-1]);
            }
            i += 2;
        }
    	
    }
};