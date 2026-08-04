class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int> ans;
       sort(nums.begin(),nums.end());
       int n = nums.size();
        int prevNum = nums[0];
       for(int i=1; i<n;i++){
         while (nums[i] != prevNum + 1){
             ans.push_back(++prevNum);
         } 
          prevNum = nums[i];
       } 
       return ans;
    }
};