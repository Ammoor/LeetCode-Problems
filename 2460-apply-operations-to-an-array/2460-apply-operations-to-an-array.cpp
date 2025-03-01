class Solution {
public:
    vector<int> applyOperations(vector<int>& nums) {
        vector<int> ans;
        int zeros = 0, arrSize = nums.size();
        for (int i = 0; i < arrSize - 1; i++) {
            if (nums[i] == nums[i + 1]) {
                nums[i] *= 2;
                nums[i + 1] = 0;
            }
        }
        for (auto it : nums) {
            if (it) {
                ans.push_back(it);
            } else {
                zeros++;
            }
        }
        while (zeros--) {
            ans.push_back(0);
        }
        return ans;
    }
};