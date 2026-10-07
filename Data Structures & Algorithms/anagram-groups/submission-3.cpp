class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> seen;
        for (int i = 0; i < strs.size(); i++) {
     string word = strs[i]; // put the stringd in the word
     string sortedWord = word;// sort the word and put in sortedword
     sort(sortedWord.begin(), sortedWord.end());
     // map the words to the sorted word that match their alphabet
    seen[sortedWord].push_back(word); // we put words in the sorted word
        }
          vector<vector<string>> result;
        // noe grouping 
        for(auto pair : seen){
         result.push_back(pair.second);
        }
  return result;
    }
};
