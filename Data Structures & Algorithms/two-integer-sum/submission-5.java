class Solution {
    public int[] twoSum(int[] nums, int target) {
         HashMap<Integer, Integer> seen = new HashMap<>();
            for(int i = 0; i < nums.length ; i++){
                int  complement = target - nums[i];
               // If the complement is found in the map, return the result
            if (seen.containsKey(complement)) {
                return new int[] { seen.get(complement), i }; // Return indices
            }
            seen.put(nums[i], i);

                    
                    
                }
                    // If no solution found, return an empty array (although problem guarantees one solution)
        return new int[] {};
            }
    }

