class Solution {
public:
    vector<int> majorityElement(vector<int>& nums) {
        unordered_map<int,int> freq;
        vector<int> ans;
        int n = nums.size();
        for(int i = 0; i<n; i++){
            freq[nums[i]]++;
        }
        for(auto &mp : freq){
            if(mp.second>n/3){
                ans.push_back(mp.first);
            }
        }
        return ans;
    }
};