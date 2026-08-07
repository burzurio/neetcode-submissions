class Solution {
public:
    
    int longestConsecutive(vector<int>& nums) {
    unordered_set<int> seen;
    
        for(const int &num : nums){       
              seen.insert(num); 
        }
       int longest{0};
       for(const int &start : seen){
        if(!seen.contains(start - 1)){
            int end = start + 1;
            while(seen.contains(end)){
                ++end;
            }
            longest = max(longest, end - start);
        }
    }
    return longest;
    } 
};
