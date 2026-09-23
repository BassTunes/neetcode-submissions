class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
       if (nums.size()==0)
            return 0;
        unsigned int count = 1;
        unsigned int max_count = 1;
        std::set<int> s;
        for (auto&& n : nums){
            s.insert(n);
        }
        unsigned int size = s.size();
        auto it = s.begin();
        unsigned int loop = 1;
        while (1) {
            // int f = *it;
            // int g = *it+1;
            if (s.contains(*it+1)) {
                max_count=std::max(max_count,++count);
                ++it;
            }
            else {
                count=1;
                ++it;
            }

            if (++loop >= size)
                break;
        }

        return max_count;
    }
};