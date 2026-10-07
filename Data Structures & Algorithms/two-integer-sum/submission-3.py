class Solution:
    
    def twoSum(self, nums: List[int], target: int) -> List[int]:
    
       seen = {}  # val -> index

       for i, n in enumerate(nums):
            complement = target - n # 7-3  = 4  7-4 = 3
            if complement in seen:
              return [seen[complement], i] # 0,1
            seen[n] = i  # seen[3] = 0