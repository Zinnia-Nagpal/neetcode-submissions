class Solution:
    def groupAnagrams(self, strs: List[str]) -> List[List[str]]:
        groups = defaultdict(list)
        
        for s in strs:
            count = [0] * 26
            for c in s:
                count[ord(c) - ord('a')] += 1
            key = tuple(count) # count is a list which is mutable and python doesnt let dict be mutable so make it a tuple
            groups[key].append(s)
        return list(groups.values())