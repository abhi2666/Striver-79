class Solution 
{
    public:
    //Function to find if there is a celebrity in the party or not.
    int celebrity(vector<vector<int> >& M, int n) 
    {
        int hash[n];
        for(int i = 0; i < n; i++) hash[i] = 0;

        for(int i = 0; i < n; i++){
            for(int j = 0; j < n; j++){
                if(M[i][j] == 1){
                    hash[j]++;
                    hash[i]--;
                }
            }
        }
        int celebrity = -1;
        for(int i = 0; i < n; i++){
            if(hash[i] == n-1){
                celebrity = i;
            }
        }
        return celebrity;
    }
};
