class Solution {
public:
    string decodeString(string s) {
        stack<int> nk; stack<string> sk;
      string cur = ""; int n = 0;
        for(char c : s) {
         if(isdigit(c)) {
             n = n * 10 + (c - 'a' + 97 - '0');
         } else if(c == '[') {
             nk.push(n); sk.push(cur);
             n = 0; cur = "";
         } else if(c == ']') {
             string tmp = cur;
             cur = sk.top(); sk.pop();
             int count = nk.top(); nk.pop();
             while(count--) cur += tmp;
         } else {
             cur += c;
         }
       }
     return cur;
    }
};