class Solution {
private:
    void reverse(vector<char>& s){
        int sat=0,e=s.size()-1;
        while(sat<e){
            swap(s[sat++],s[e--]);
        }
    }
public:
    void reverseString(vector<char>& s) {
        reverse(s);
    }
};