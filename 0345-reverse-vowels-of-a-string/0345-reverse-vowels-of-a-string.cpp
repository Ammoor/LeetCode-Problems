class Solution {
public:
    string reverseVowels(string s) {
        set<char> st = {'a', 'e', 'i', 'o', 'u', 'A', 'E', 'I', 'O', 'U'};
        string ans = "", str = "";
        for (auto it : s) {
            if (st.count(it)) {
                str += it;
            }
        }
        for (auto it : s) {
            if (st.count(it)) {
                ans += str.back();
                str.pop_back();
            } else {
                ans += it;
            }
        }
        return ans;
    }
};