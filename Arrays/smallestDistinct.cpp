/*
str --> AABBBBCBAC
*/

class Solution{
    public:
    int findSubString(string str)
    {
        int unqiueChars = 0;
        int countUnique = 0;
        unordered_set<char>st;
        for(auto it : str) st.insert(it);
        unqiueChars = st.size();

        unordered_map<char, int>mp;
        int i = 0, j = 0, ans = INT_MAX;
        while(j < str.size()){

            //insert elements into map
            mp[str[j]]++;
            if(mp[str[j]] == 1) countUnique++;

            if(countUnique == unqiueChars){
                // you have got all the characters..now try to reduce the 
                // size of window
                ans = min(ans, j-i);
                while(i < j && countUnique == unqiueChars){
                    mp[str[i]]--;
                    if(mp[str[i]] == 0){
                        // reduce the count
                        countUnique--;
                    }
                    i++;
                }
            }
            j++;
        }
    }
};