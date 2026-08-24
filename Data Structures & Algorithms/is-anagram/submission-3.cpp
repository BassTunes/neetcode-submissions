class Solution {
public:
    bool isAnagram(string s, string t) {
        if (s.length() != t.length())
            return false;
        int letters[26] = {0};
        for (int i=0;i<s.length();i++) {
            letters[s[i]-'a']++;
            letters[t[i]-'a']--;
        }
        for (auto&& value : letters) {
            if (value > 0)
                return false;
        }
        return true;
    }
};
