class Solution {
public:
    bool repeatedSubstringPattern(string s) {
        string t = s + s;
         string sub = t.substr(1, t.length() - 2);
        
        if(sub.find(s) != string::npos) {
             return true;
        }
        return false;
    }
};