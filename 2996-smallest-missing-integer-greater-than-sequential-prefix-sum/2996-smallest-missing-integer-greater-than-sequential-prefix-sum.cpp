class Solution {
public:
    int missingInteger(vector<int>& nums) {
        
        int res = nums[0];

        // Find sum of longest sequential prefix
        for (int i = 1; i < nums.size(); i++) {
            if (nums[i] == nums[i - 1] + 1) {
                res += nums[i];
            } 
            else {
                break;
            }
        }

        // Store all elements
        unordered_set<int> seen(nums.begin(), nums.end());

        // Find smallest integer >= res not present in nums
        int ans = res;

        while (seen.count(ans)) {
            ans++;
        }

        return ans;
    }
};