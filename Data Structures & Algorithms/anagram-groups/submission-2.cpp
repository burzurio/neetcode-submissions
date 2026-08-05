class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) { 
        unordered_map<string, vector<string>> seen;
        vector<vector <string>> res;

        for(string s : strs){
            string sorted = s;
            sort(sorted.begin(), sorted.end());
            seen[sorted].push_back(s);
        }

        for(auto &x : seen){
            res.push_back(move(x.second));
        }
        return res;
    }
};
