class Solution {
public:
    string reverseWords(string s) {
        string ans = "";
        int cnt = 0;
        bool flag = false;
        for (int i = s.size() - 1; i >= 0; i--) {
            if (s[i] != ' ' && flag == false) {
                cnt++;
                flag = true;
            } else if (s[i] != ' ' && flag == true) {
                cnt++;
            } else if (s[i] == ' ' && cnt >= 1) {
                ans += (s.substr(i + 1, cnt) + " ");
                cnt = 0;
            }
        }
        if (cnt) {
            ans += (s.substr(0, cnt));
        } else {
            ans.pop_back();
        }
        return ans;
    }
};