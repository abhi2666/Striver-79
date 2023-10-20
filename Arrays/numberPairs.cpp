class Solution{   
public:
    long long countPairs(int X[], int Y[], int m, int n) {
        long long count = 0;
        for(int i = 0; i < m; i++)
        {
            for(int j = 0; j < n; j++{
                if(pow(X[i], Y[j]) > pow(Y[j], X[i])){
                    count++;
                }
            }
        }
        return count;
    }
};
