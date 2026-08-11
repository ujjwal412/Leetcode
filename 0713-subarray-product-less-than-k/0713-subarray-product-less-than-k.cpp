class Solution {
public:
    int numSubarrayProductLessThanK(vector<int>& nums, int k) {
        if (k <= 1) return 0;
      int low = 0;
      int high = 0;
      long long product = 1;
      int ans = 0;

      for(high= 0;high<nums.size(); high++){
        product *= nums[high];

        while(product>=k){
           product /= nums[low];
                low++;
        }
        int len = high-low+1;
        ans += len; 
      }
      return ans;
    }
};