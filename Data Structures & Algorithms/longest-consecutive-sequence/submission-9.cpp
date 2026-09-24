class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.size()==0)
            return 0;
        unsigned int count = 1, max_count = 1;
        std::set<int> s(nums.begin(), nums.end());
        for (auto it = s.begin(); it != s.end(); ++it)  {
            while (s.contains(*it+1)) {
                count++;
                ++it;
            }
            max_count = std::max(max_count, count);
            count = 1;
        }
        return max_count;
    }
};