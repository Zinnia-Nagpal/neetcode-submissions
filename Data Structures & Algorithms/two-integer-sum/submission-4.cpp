class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        unordered_map < int , int> seen;

          for (int i = 0; i < nums.size(); i++){
           int complement = target - nums[i];  //  7-3 = 4 not in seen
            if(seen.count(complement)){
                return{seen[complement], i};
            }
            seen[nums[i]] = i;
        }
        return{};
    }
};
