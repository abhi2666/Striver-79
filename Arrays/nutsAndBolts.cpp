class Solution{
public:	
    vector<char>seq{ '!', '#', '$', '%', '&', '*', '@', '^', '~'};
	void matchPairs(char nuts[], char bolts[], int n) {
	    unordered_map<char, int>mp;
        for(int i = 0; i < n; i++){
            mp[nuts[i]] = 1;
        }
        for(int i = 0; i < n; i++){
            mp[bolts[i]]++;
        }
        int k = 0;
        for(auto ele : seq){
            if(mp[ele] >= 2){
                nuts[k] = ele;
                bolts[k] = ele;
                k++;
            }
        }
	}

};
