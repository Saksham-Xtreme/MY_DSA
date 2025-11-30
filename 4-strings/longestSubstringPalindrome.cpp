class Solution {
    public:
        string longestPalindrome(string s) {
            vector<string> str;
            int n=s.length();
            int s=0,end=n-1;
            while(st<end){
                if(s[st]==s[end]){
                    str+=s[st];
                }
                st++;
                end--;
            }
            
        }
        
    };