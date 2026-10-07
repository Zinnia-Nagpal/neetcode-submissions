class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
    // make a hashmap call group cannoto be vector<int> not hashable
     unordered_map< string, vector<string>> groups;
    for(const auto& s:strs){
    vector<int> count(26,0);
       for(char c: s){
          count[c - 'a']++;
       }
       string key = to_string(count[0]); // for eg - a int index to 'a' string
       for(int i = 1; i<26 ; ++i){
          key += ',' + to_string(count[i]);
      } 
        groups[key].push_back(s);
      }
      vector<vector<string>> result;
      for (const auto& pair : groups){
          result.push_back(pair.second);
      }
      return result;
      }
};

