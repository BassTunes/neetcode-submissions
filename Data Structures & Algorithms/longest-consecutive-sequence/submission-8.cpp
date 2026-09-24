class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.size()==0)
            return 0;
        unsigned int count = 1, max_count = 1;
        std::set<int> s(nums.begin(), nums.end());
        unsigned int size = s.size();
        auto it = s.begin();
        unsigned int loop = 1;
        while (it != s.end()) {
            if (s.contains(*it+1)) {
                count++;
            }
            else {
                max_count=std::max(max_count,count);
                count=1;
            }
            ++it;
        }
        return max_count;
    }
};