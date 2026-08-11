class Solution {
public:
    int maxSubarraySumCircular(vector<int>& nums) {
        int totalSum = nums[0];

        int maxending = nums[0];
        int maxsum = nums[0];

        int minending = nums[0];
        int minsum =nums[0];
        

        for(int i=1; i<nums.size(); i++){
            totalSum += nums[i];

            // Maximum subarray
            maxending = max(nums[i], maxending + nums[i]);
            maxsum = max(maxsum, maxending);

            // Minimum subarray
            minending = min(nums[i], minending + nums[i]);
            minsum = min(minsum, minending);
        }
         if (maxsum < 0) {
            return maxsum;
        }

        // Circular maximum
        int circularSum = totalSum - minsum;

        return max(maxsum, circularSum);
    }
};