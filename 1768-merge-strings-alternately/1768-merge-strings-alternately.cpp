class Solution {
public:
    string mergeAlternately(string word1, string word2) {
        string ans = "";
        int minWordSize = min(word1.size(), word2.size());
        for (int i = 0; i < minWordSize; i++) {
            ans += word1[i];
            ans += word2[i];
        }
        if (minWordSize == word1.size()) {
            ans += word2.substr(minWordSize);
        } else {
            ans += word1.substr(minWordSize);
        }
        return ans;
    }
};