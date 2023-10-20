class Solution {
  public:
    int countSpecialNumbers(int N, vector<int> a) {
        sort(a.begin(), a.end());
        int count = 0;
        for(int i = 1; i < N; i++){
            for(int j = 0; j < i; j++){
                if(a[i]%a[j] == 0){
                    count++;
                    break;
                }
            }
        }
        // for the first element 
        if(a[0]%a[1] == 0) count = count+1;
        return count;
    }
};