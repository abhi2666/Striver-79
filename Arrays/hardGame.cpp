/*
you have to find the largest level from where you can start and get to n 
you will consume a[i] energy to move from a[i] to a[i + 1] and will gain 
k energy each time you reach a 0. Initially you have k energy..
*/

class Solution {
  public:
    int powerup(int N, int K, vector<int> &a) {
        // start from the back to get the largest level
        int sum = 0, ans = -1;
        for(int i = N-1; i >= 0; i--){
            sum += a[i];
            if(a[i] == 0) K += K;
            if(K >= a[i]){
                ans = i;
                break;
            } // 0-based indexing
        }
        return ans;
    }
};