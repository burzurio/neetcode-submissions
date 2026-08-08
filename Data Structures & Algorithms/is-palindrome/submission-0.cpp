class Solution {
public:
    bool isPalindrome(string s) {
        int start = 0;
        int end = s.size() - 1;

        while(end > start){
            while(end > start && !isalnum(s[start])){
                ++start;
            }

            while(end > start && !isalnum(s[end])){
                --end;
            }

            if (tolower(s[end]) != tolower(s[start])){
                return false;
            }

            --end;
            ++start;
        }
        return true;      
    }
};
