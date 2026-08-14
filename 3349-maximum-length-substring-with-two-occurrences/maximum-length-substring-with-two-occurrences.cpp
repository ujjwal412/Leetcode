class Solution {
public:
    int maximumLengthSubstring(string s) {
        unordered_map<char, int> f;

        int low = 0;
        int res = 0;

        for (int high = 0; high < s.size(); high++) {

            f[s[high]]++;

            while (f[s[high]] > 2) {
                f[s[low]]--;
                low++;
            }

            res = max(res, high - low + 1);
        }

        return res;
    }
};