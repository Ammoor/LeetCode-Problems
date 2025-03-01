class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int maxCount = *max_element(candies.begin(), candies.end());
        for (auto it : candies) {
            if (it + extraCandies >= maxCount) {
                ans.push_back(true);
            } else {
                ans.push_back(false);
            }
        }
        return ans;
    }
};