class Solution {
public:
    vector<int> pivotArray(vector<int>& nums, int pivot) {
        vector<int> small;
        deque<int> large;
        for (auto it : nums) {
            if (it == pivot) {
                large.push_front(it);
            } else if (it > pivot) {
                large.push_back(it);
            } else {
                small.push_back(it);
            }
        }
        for (auto it : large) {
            small.push_back(it);
        }
        return small;
    }
};