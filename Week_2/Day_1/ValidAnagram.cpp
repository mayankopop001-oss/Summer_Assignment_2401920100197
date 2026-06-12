bool isAnagram(string s, string t) {
        if(s.size()!=t.size()) return false;
        unordered_map<char,int>sopFreq;
        for(int i=0;i<s.size();i++){
            sopFreq[s[i]]++;
        }
        for(int i=0;i<s.size();i++){
            if(sopFreq[t[i]]==0){
                return false;
            }
        }
        return true;
    }