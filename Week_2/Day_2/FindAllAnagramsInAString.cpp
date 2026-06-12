class Solution {
public:
    vector<int> findAnagrams(string s, string p) {
        vector<int> res;
        if(p.length() > s.length()) return res;
        
        vector<int> pc(26,0), sc(26,0);
        for(int i=0; i<p.length(); i++) {
             pc[p[i]-'a']++;
             sc[s[i]-'a']++;
        }
        if(pc == sc) res.push_back(0);
        
        int l = 0;
        for(int r=p.length(); r<s.length(); r++) {
           sc[s[r] - 'a']++;
           sc[s[l] - 'a']--;
            l++;
           if(sc == pc) {
                res.push_back(l);
           }
        }
        return res;
    }
};