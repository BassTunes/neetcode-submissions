class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 1);
        vector<int> postfix(nums.size()+1, 1);
        vector<int> result(nums.size(), 1);
        int size = nums.size();

        for (int i=0; i<size; i++) {
            prefix[i+1] = nums[i] * prefix[i];
        }
        for (int i=size; i>0; i--) {
            postfix[i-1] = nums[i-1] * postfix[i];
            result[i-1] = postfix[i] * prefix[i-1];
        }
        return result;
    }
};
