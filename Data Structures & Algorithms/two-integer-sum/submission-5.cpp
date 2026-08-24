class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        size_t vecSize = nums.size();
        std::map<int, int> map;
        // std::vector<int> result;

        for (auto&& num : nums) {
            diff = target - num;
            map.emplace(num, diff);
        }

        for (auto&& element : map) {
            auto itr = std::find(nums.begin(), nums.end(), element.first);
            auto itrS = std::find(itr+1, nums.end(), element.second);
            
            if (itrS != nums.end()) {
                int distanceS = std::distance(nums.begin(), itrS);
                int distance = std::distance(nums.begin(), itr);
                return {distance, distanceS};
            }
            
        }
        return {};
    }
};
