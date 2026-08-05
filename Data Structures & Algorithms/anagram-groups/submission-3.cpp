class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        unordered_map<string, vector<string>> seen;
        vector<vector <string>> res;

        for(string s : strs){
            seen[bucketSort(s)].push_back(s); //uses sorted string as a key in hashmap and appends to vector
        }

        for(auto &x : seen){
            res.push_back(move(x.second));
        }
        return res;
    }



private:
    string bucketSort(string s){
        int map[26] = {0};
        for(const char &c : s){
            map[c - 'a']++;
        }

        string res;
        for(int i{0}; i < 26; ++i){
            res += string(map[i], i + 'a');
        }
        return res;
    }
};