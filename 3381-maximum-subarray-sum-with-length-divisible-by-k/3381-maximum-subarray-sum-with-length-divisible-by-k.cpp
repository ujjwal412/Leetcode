class Solution {
public:
    long long maxSubarraySum(vector<int>& nums, int k) {
        long long sum = 0;
        long long res = LLONG_MIN;

        vector<long long> minPrefix(k, LLONG_MAX);
        minPrefix[0] = 0;

        for (int i = 0; i < nums.size(); i++) {
            sum += nums[i];

            int rem = (i + 1) % k;

            if (minPrefix[rem] != LLONG_MAX) {
                res = max(res, sum - minPrefix[rem]);
            }

            minPrefix[rem] = min(minPrefix[rem], sum);
        }

        return res;
    }
};