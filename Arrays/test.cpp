// class Solution
// {
// public:
//     vector<string> letterCombinations(string digits)
//     {
//         vector<string> res;
//         if (digits.empty())
//             return res;
//         vector<string> dict = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
//         string curr = "";
//         dfs(digits, dict, 0, curr, res);
//         return res;
//     }

//     void dfs(string &digits, vector<string> &dict, int pos, string &curr, vector<string> &res)
//     {
//         if (pos == digits.size())
//         {
//             res.push_back(curr);
//             return;
//         }
//         for (char c : dict[digits[pos] - '0'])
//         {
//             curr += c;
//             dfs(digits, dict, pos + 1, curr, res);
//             curr.pop_back();
//         }
//     }
// };

#include<iostream>
#include<stdlib.h>
using namespace std;
int main(){
    
}