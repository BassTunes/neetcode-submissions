class Solution {
public:
    bool hasDuplicate(vector<int>& nums) {
        std::unordered_map<int, bool> umap;
        for (auto&& value : nums) {
            if (umap[value]) {
                return true;
            } else {
                umap[value] = true;
            }
        }
        return false;
    }
};