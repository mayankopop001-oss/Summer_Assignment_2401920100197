class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {

        int count[26] = {0};

        for(int i = 0; i < magazine.size(); i++)
        {
            count[magazine[i] - 'a']++;
        }

        for(int j = 0; j < ransomNote.size(); j++)
        {
            int index = ransomNote[j] - 'a';

            if(count[index] <= 0)
                return false;

            count[index]--;
        }

        return true;
    }
};