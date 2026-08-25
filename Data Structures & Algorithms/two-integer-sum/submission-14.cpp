class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::unordered_map<int, int> num_map;
        for (int i=0;i<nums.size();i++) {
            int remainder = target - nums[i];
            if (num_map.contains(remainder)) {
                return {num_map[remainder], i};
            }
            num_map[nums[i]] = i;
        }
        return {};
    }
};
