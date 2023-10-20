class Solution
{
public:
    
    int LCS(int n, int m, string&s1, string&s2){

        if(n == 0 && m == 0){
            if(s1[n] == s2[m]){
                return 1;
            }
        }
        int move = 0;
        if(s1[n] == s2[m]){
            move = 1 + LCS(n-1, m-1, s1, s2);
        }
        else{
            move = LCS(n-1, m, s1, s2) + LCS(n, m-1, s1, s2);
        }
        return move;

    }
    //Function to find the length of longest common subsequence in two strings.
    int lcs(int n, int m, string s1, string s2)
    {
        return LCS(n, m, s1, s2);
    }
};