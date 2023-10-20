class Solution{
  public:
    // Function to find floor of x
    // n: size of vector
    // x: element whose floor is to find
    int findFloor(vector<long long> v, long long n, long long x){
        int l = 0, h = n-1;
        // we have to find the largest element smallest than x
        int mid, ans = -1;
        while(l <= h){
            mid = (l + h)/2;
            if(v[mid] > x){
                high = mid -1;
            }
            else if(v[mid] < x){
                ans = mid;
                low = mid + 1;
            }
            else{
                // if both are equal..we have to find smaller element
                return mid;
            }
        }

        return ans;
    }
};