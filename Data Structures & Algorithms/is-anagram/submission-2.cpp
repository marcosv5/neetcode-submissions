class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.size() != t.size()) return false;
        map<char, int> sCount;
        map<char, int> tCount;
        for (int i = 0; i < s.size(); i++) {
            sCount[s[i]]++;
            tCount[t[i]]++;
        }
        return sCount == tCount;
    }
};
