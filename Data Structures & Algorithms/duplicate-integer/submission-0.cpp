class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int,int> nmap;
        for (auto&& value : nums) {
            if (auto itr = nmap.find(value); itr != nmap.end()) {
                return true;
            }
            else {
                nmap.emplace(value, 1);
            }
        }
        return false;
    }
};