class Solution {
public:
    vector<int> twoSum(vector<int>& numbers, int target) {
        int left = 0;
        int right = numbers.size() - 1;
        vector<int> res(2);

        while(right > left){
            int current = numbers[left] + numbers[right];
            if(current == target){
                res[0] = left + 1;
                res[1] = right + 1;
                return res;
            }
            if (current > target){
                --right;
            }
            else{
                ++left;
            }
        }    
    }
};
