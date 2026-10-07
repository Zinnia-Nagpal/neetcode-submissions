class Solution {
public:
    bool isAnagram(string s, string t) {
         if(s.size() != t.size()){
             return false;
         }
        sort(s.begin(), s.end());
        sort(t.begin(), t.end());

        if(s == t){
        return true;
        }
        else {
        return false;
        }
    }
    //     unordered_map<char , int> countS;
    //     unordered_map<char, int> countT;
    //     for(int i = 0; i < s.length(); i++){
    //         countS[s[i]]++;
    //         countT[t[i]]++;
    //     }
    //     return countS == countT;
    // }
};
