class Solution {
public:
    int compress(vector<char>& chars) {
        int i = 0, idx = 0;
   while(i < chars.size()){
       int j = i;
          while(j < chars.size() && chars[j] == chars[i]) {
              j++;
          }
       chars[idx++] = chars[i];
         if(j - i > 1) {
              string s = to_string(j - i);
             for(char c : s) {
                  chars[idx++] = c;
             }
         }
          i = j;
    }
      return idx;
    }
};