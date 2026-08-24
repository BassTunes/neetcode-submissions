class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        int diff;
        int diffF = target - nums[0];
        int count = 0;
        std::unordered_map<int, int> nmap;

        for (auto&& num : nums) {
            if ((diffF == num) && (count > 0))
                return {0, count};
            diff = target - num;
            nmap.emplace(num, diff);
            count++;
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
