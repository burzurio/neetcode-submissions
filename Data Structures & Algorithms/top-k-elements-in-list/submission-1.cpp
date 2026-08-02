class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        unordered_map<int, int> seen;

        for(int num : nums){
            seen[num]++;
        }

       vector<vector<int>> buckets(nums.size() + 1);
       for(auto x : seen){
        buckets[x.second].push_back(x.first);
       }
           

        vector<int> res;
        for(int i = buckets.size() -1; res.size() < k; --i){
            for(int num: buckets[i]){
                res.push_back(num);
            }
        }
        return res;
    }
};
