class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map <int, int> seen;

        vector<int> res(2, -1); //element value(2) and a dummy value(-1)

        for(int i{0}; i < nums.size(); ++i){
            int toFind = target - nums[i];

            if(seen.contains(toFind)){
                res[0] = seen[toFind];
                res[1] = i;
                return res;
            }
            seen[nums[i]] = i;
        }
        return res;
    }
};
