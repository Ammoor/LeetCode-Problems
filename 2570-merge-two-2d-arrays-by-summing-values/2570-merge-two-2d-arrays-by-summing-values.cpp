class Solution {
public:
    vector<vector<int>> mergeArrays(vector<vector<int>>& nums1,
                                    vector<vector<int>>& nums2) {
        map<int, int> mp;
        vector<vector<int>> ans;
        int rows = nums1.size();
        for (int i = 0; i < rows; i++) {
            mp[nums1[i][0]] = nums1[i][1];
        }
        rows = nums2.size();
        for (int i = 0; i < rows; i++) {
            if (mp.find(nums2[i][0]) == mp.end()) {
                mp[nums2[i][0]] = nums2[i][1];
            } else {
                mp[nums2[i][0]] += nums2[i][1];
            }
        }
        for (auto it : mp) {
            ans.push_back({it.first, it.second});
        }
        return ans;
    }
};