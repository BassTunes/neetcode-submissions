class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        std::unordered_map<int, int> nmap;

        for (auto&& num : nums) {
            diff = target - num;
            nmap.emplace(num, diff);
        }
        diff = 0;
        for (auto&& element : nums) {
            if (auto itr = std::find(nums.begin()+diff+1, nums.end(), nmap[element]); itr != nums.end()) {
                int position = std::distance(nums.begin(), itr);
                return {diff, position};
            }
            diff++;
        }
        return {};
    }
};
