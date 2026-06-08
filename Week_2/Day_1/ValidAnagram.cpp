class Solution {
public:
    bool isAnagram(string s, string t) {

        if(s.size() != t.size())
        {
            return false;
        }

        int countLetters[26] = {0};

        for(int idx = 0; idx < s.size(); idx++)
        {
            countLetters[s[idx] - 'a']++;
        }

        for(int idx = 0; idx < t.size(); idx++)
        {
            countLetters[t[idx] - 'a']--;
        }

        for(int pos = 0; pos < 26; pos++)
        {
            if(countLetters[pos] != 0)
            {
                return false;
            }
        }

        return true;
    }
};