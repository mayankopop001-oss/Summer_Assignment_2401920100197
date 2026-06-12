class Solution {
public:
    string reverseWords(string s) {
        int i =0;
      for(int j=0; j<=s.length(); j++) {
          if(j == s.length() || s[j] == ' ') {
              int l=i, r=j-1;
       while(l<r) {
           swap(s[l], s[r]);
           l++; r--;
         }
              i = j+1;
          }
       }
        return s;
    }
};