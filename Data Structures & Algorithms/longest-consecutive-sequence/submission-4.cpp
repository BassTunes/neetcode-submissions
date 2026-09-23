class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if (nums.size()==0)
            return 0;
        unsigned int count = 1;
        unsigned int max_count = 1;
        std::set<int> c;
        for (auto&& n : nums) {
            c.insert(n);
        }
        for (auto it=c.begin(), it_n=++c.begin();it_n!=c.end();++it, ++it_n) {
            (*it_n) == *it+1? max_count=std::max(max_count, ++count) : count=1;
        }
        return max_count;
    }
};