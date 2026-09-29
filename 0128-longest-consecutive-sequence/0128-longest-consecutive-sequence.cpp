class Solution {
public:
    int longestConsecutive(vector<int>& nums) {
        if(nums.size() == 0){
            return 0;
        }
        int length = 1;
        int count = 0;
        sort(nums.begin(),nums.end());
        
        for(int i=1; i<nums.size(); i++){
            if(nums[i] != nums[i-1]){
                if (nums[i] == nums[i - 1]+1){
                length++;
            }else{
               count = max(count,length);
               length = 1;
            }
        }
    }
        return max(count, length);
    }
};