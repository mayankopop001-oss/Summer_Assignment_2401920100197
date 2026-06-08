class Solution {
public:
    int firstUniqChar(string s) {

        int letters[26] = {0};

        for(int idx = 0; idx < s.size(); idx++)
        {
            letters[s[idx] - 'a']++;
        }

        for(int pos = 0; pos < s.size(); pos++)
        {
            int current = s[pos] - 'a';

            if(letters[current] == 1)
            {
                return pos;
            }
        }

        return -1;
    }
};