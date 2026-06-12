class Solution {
public:
    vector<string> generateParenthesis(int n) {
        vector<string> res;
         solve(0, 0, n, "", res);
       return res;
    }
    
    void solve(int o, int c, int n, string curr, vector<string>& res) {
        if(curr.length() == n*2) {
            res.push_back(curr);
             return;
        }
      if(o < n) 
          solve(o+1, c, n, curr + "(", res);
        if(c < o) {
solve(o, c+1, n, curr + ")", res);
        }
    }
};