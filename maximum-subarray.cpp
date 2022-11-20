class Solution {
public:
    int maxSubArray(vector<int>& nums) {
        int history=nums[0];
        int mx=history;
        int len=nums.size();
        for(int i=1;i<len;i++){
            history=max(history+nums[i],nums[i]);
            mx=max(mx,history);
        }
        return mx;
    }
};
