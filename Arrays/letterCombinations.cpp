/*
you have to return all the substrings that can be formed from this given string
when mapped to the corresponding letter value..
*/

class Solution {
public:
    vector<string>mp = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs" , "tuv", "wxyz"};

    void getCombos(int idx, vector<int>&digits, string temp, vector<string>&ans){
        // check if the string is complete 
        if(temp.size() == digits.size()){
            ans.push_back(temp);
            return;
        }
        // else look for combinations
        for(int i = 0; i < mp[digits[idx]].size(); i++){
            //pick the char at i position and add it to tempa and also
            // increase the index
            getCombos(idx+1, digits, temp+mp[digits[idx]][i], ans);
        }
    }
    vector<string> letterCombinations(string digits) {
        
        vector<string>ans;
        if(digits.size() < 1) return ans;
        vector<int>convert;
        for(auto it : digits){
            convert.push_back(it-'0');
        }
        getCombos(0, convert, "", ans);
        return ans;

    }
};