class Solution {
public:
    string removeDuplicates(string s) {
        int n = s.size();
        vector<char>st;
        string res;
        for(int i=0; i<n; i++){
            if(st.empty()){
                st.push_back(s[i]);
                continue;
            }
            if(st.back()==s[i]){
                st.pop_back();
                continue;
            }
            st.push_back(s[i]);
        }
        while(!st.empty()){
            res.push_back(st.back());
            st.pop_back();
        }
        reverse(res.begin(),res.end());
        return res;
    }
};