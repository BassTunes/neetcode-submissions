class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        std::map<int, std::vector<int>> letterPos;
        int remainder = target - nums[0];
        for (int i=1; i<nums.size();i++) {
            if (remainder == nums[i]) {
                return {0,i};
            } else {
                letterPos[nums[i]].push_back(i);
            }
        }
        for (const auto& pair : letterPos) {
            if (!letterPos[target-pair.first].empty()) {
                if (pair.second[0]>letterPos[target-pair.first][0]) {
                    return {letterPos[target-pair.first][0], pair.second[0]};
                } else if (pair.second[0]==letterPos[target-pair.first][0]) {
                    return {pair.second[0], pair.second[1]};
                } else {
                    return {pair.second[0], letterPos[target-pair.first][0]};
                }
            }
        }
        return {0,0};
    }
};
