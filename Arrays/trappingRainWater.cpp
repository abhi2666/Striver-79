/*
we will use two pointer approach here but we can use left and right array approach also
*/

class Solution {
public:
    int trap(vector<int>& height) {
        int res = 0, leftMax = -1, rightMax = -1;
        int l = 0, r = height.size()-1;
        while(l <= r){
            if(height[l] <= height[r])
            {
                if(height[l] >= leftMax){
                    leftMax = height[l];
                }
                else{
                    res += leftMax-height[l];
                }
                l++;
            }
            else{
                if(height[r] >= rightMax){
                    rightMax = height[r];
                }
                else{
                    res += rightMax-height[r];
                }
                r--;
            }
        }
        return res;
    }
};