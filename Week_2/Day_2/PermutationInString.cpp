class Solution {
public:
    bool checkInclusion(string s1, string s2) {
        if(s1.length() > s2.length()) return false;
        vector<int> c1(26, 0), c2(26, 0);
        
         for(int i=0; i<s1.length(); i++) {
            c1[s1[i] - 'a']++;
            c2[s2[i] - 'a']++;
         }   
        if(c1 == c2) return true;
        
        int l = 0;
        for(int r=s1.length(); r<s2.length(); r++) {
            c2[s2[r] - 'a']++;
             c2[s2[l] - 'a']--;
            l++;
            if(c1 == c2) {
                 return true;
            }
        }
        return false;
    }
};