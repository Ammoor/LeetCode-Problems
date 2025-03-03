class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        int cnt = 0;
        vector<int> small, large;
        for (auto it : nums) {
            if (it == pivot) {
                cnt++;
            } else if (it > pivot) {
                large.push_back(it);
            } else {
                small.push_back(it);
            }
        }
        while (cnt--) {
            small.push_back(pivot);
        }
        small.insert(small.end(), large.begin(),
                     large.end()); // append large vector to small vector.
        return small;
    }
};