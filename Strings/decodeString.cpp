class Solution {
public:
    string decodeString(string s) {
        stack<string>st;
        for(int i = 0; i < s.size(); i++){
            if(s[i] != ']'){
                st.push(to_string(s[i]));
            }
            else {
                string str = "";
                int num = 0;
                while(!st.empty() && st.top() != ']'){
                    if(st.top() >= 'a' && st.top() <= 'z'){
                        str += st.top();
                    }
                    else if(st.top() >= '0' && st.top() <= '9'){
                        num = num*10 + stoi(st.top());
                    }
                    st.pop();
                }
                reverse(str.begin(), str.end());
                // now put back the string you got in stack num number of times
                for(int j = 0; j < num; j++){
                    st.push(str);
                }
            }
        }
        string ans;
        // now add up all the strings in stack
        while(!st.empty()){
            ans += st.top();
            st.pop();
        }

        return ans;
    }
};