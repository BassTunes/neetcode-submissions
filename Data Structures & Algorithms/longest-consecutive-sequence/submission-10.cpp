class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.size()==0)
            return 0;
        unsigned int count = 1, max_count = 1;
        std::set<int> s(nums.begin(), nums.end());
        for (auto&& n : s)  {
            if (s.contains(n+1)) {
                count++;
            }
            else {
                max_count = std::max(max_count, count);
                count = 1;
            }
        }
        return max_count;
    }
};