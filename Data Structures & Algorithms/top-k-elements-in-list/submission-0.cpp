#include <vector>
#include <unordered_map>
using namespace std;

class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        // 1) Count frequencies
        unordered_map<int, int> count;          // number -> how many times
        for (int x : nums) {
            count[x] = count[x] + 1;            // no 'if' needed; default 0 then +1
        }

        // 2) Buckets: index = frequency, value = list of numbers with that frequency
        int n = nums.size();
        vector<vector<int>> buckets(n + 1);     // buckets[0..n]
        for (auto p : count) {
            int num  = p.first;
            int freq = p.second;
            buckets[freq].push_back(num);
        }

        // 3) Collect from highest frequency down
        vector<int> res;
        for (int f = n; f >= 1; --f) {
            for (int num : buckets[f]) {
                res.push_back(num);
                if ((int)res.size() == k) return res;
            }
        }
        return res; // in case k == 0
    }
};
