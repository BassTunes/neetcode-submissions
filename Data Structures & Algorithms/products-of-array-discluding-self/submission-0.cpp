class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        vector<int> prefix(nums.size()+1, 1);
        vector<int> postfix(nums.size()+1, 1);
        vector<int> result(nums.size(), 1);
        int product = 1;
        for (int i=0; i<nums.size(); i++) {
            prefix[i+1] = nums[i] * product;
            product = prefix[i+1];
        }
        product = 1;
        for (int i=nums.size()-1; i>=0; i--) {
            postfix[i] = nums[i] * product;
            product = postfix[i];
        }
        for (int i=0; i<result.size(); i++) {
            result[i] = prefix[i] * postfix[i+1];
        }
        return result;
    }
};
