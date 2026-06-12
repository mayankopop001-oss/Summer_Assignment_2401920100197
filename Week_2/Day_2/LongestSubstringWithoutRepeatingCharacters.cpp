class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_set<char> st;
        int l = 0, ans = 0;
         for(int r=0; r<s.length(); r++) {
             while(st.find(s[r]) != st.end()) {
                st.erase(s[l]);
                l++;
             }
            st.insert(s[r]);
             if(r - l + 1 > ans) {
                 ans = r - l + 1;
             }
         }
        return ans;
    }
};