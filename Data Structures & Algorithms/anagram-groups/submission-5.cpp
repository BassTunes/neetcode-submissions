class Solution {
public:
    vector<vector<string>> groupAnagrams(vector<string>& strs) {
        unordered_map<string, vector<string>> map;
            vector<vector<string>> results;

            for(auto&& value : strs){
                array<char, 26> key{};
                for(auto&& letter : value){
                    key[letter - 'a']++;
                }
                string keyStr(key.begin(), key.end());
                map[keyStr].push_back(value);
            }

            for (auto&& group: map){
                results.push_back(group.second);
            }
            return results;
    }
};
