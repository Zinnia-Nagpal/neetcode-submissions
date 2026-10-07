class Solution {
public:
    bool isAnagram(string s, string t) {
        // first edge ccase if the length is same

        if(s.length() != t.length()){
            return false;
        }
    sort(s.begin(), s.end());
    sort(t.begin(), t.end());
    return s == t;

     
    }
};
