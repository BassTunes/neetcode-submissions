class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        if (nums.size() > 3)
            sort(nums.begin(), nums.end());

        vector<vector<int>> bucket(nums.size());
        bucket[0].push_back(nums[0]);
        for (int i=1, j=0; i<nums.size(); i++) {
            if (nums[i]==nums[i-1]) {
                bucket[j].push_back(nums[i]);
            } else {
                j++;
                bucket[j].push_back(nums[i]);
            }
        }

        sort(bucket.begin(), bucket.end(),
            [](const vector<int>&a, const vector<int>& b)
                { return a.size() > b.size(); });

        vector<int> result;
        for (int i=0; i<k; i++){
            result.push_back(bucket[i][0]);
        }
        return result;
    }
};
