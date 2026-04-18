class Solution {
public:
    bool pal(string &s,int i, int n){
        if(i >= n/2) return true;
        if(s[i] != s[n-i-1])return false;
        return pal(s, i+1, n);
    }

    bool isPalindrome(string s) {
        int n = s.size();
        string clean;
        for(int i=0; i< n; i++){
            if(isalnum((unsigned char)s[i])){
                clean += tolower((unsigned char)s[i]);
            }
        }
        int m = clean.size();
        return pal(clean, 0, m);
    }
};