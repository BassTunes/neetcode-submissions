class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> nmap;
        for (auto&& element : strs) {
            vector<int> charCount(26,0);
            for (char c : element) {
                charCount[c - 'a']++;
            }
            string key = to_string(charCount[0]);
            for (int i=1; i<26; i++) {
                key += ','+to_string(charCount[i]);
            }
            nmap[key].push_back(element);
        }

        vector<vector<string>> output;
        for (auto&& elements : nmap) {
            output.push_back(elements.second);
        }
        return output;
    }
};
