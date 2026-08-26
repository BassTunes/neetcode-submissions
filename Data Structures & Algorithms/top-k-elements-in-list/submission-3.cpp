class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
         int n = nums.size();

        std::unordered_map<int, int> counts;
        for (int num : nums) {
            counts[num]++;
        }

        std::vector<std::vector<int>> buckets(n + 1);
        for (const auto& [num, freq] : counts) {
            buckets[freq].push_back(num);
        }

        std::vector<int> result;
        for (int freq = n; freq >= 0 && result.size() < k; --freq) {
            for (const auto& num : buckets[freq]) {
                result.push_back(num);
                if (result.size()==k)
                    return result;
            }
        }
        return result;
    }
};
