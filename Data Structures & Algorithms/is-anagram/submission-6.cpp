class Solution {
public:
    bool isAnagram(string s, string t) {
        int map[26] ={0};

        for(char c : s)
            map[c - 'a']++; //We use 'a' since it's the first letter of the alphabet then increment

        for(char c : t) //loop to decrement the value of matched characters
            map[c - 'a']--;

        for(int x : map){ //loop to check the value of x from 0-25
            if(x != 0)
                return false;
        }
        
        return true;
    }
};
