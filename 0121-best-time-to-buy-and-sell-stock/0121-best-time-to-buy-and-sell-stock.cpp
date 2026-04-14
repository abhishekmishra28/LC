class Solution {
public:
    int maxProfit(vector<int>& nums) {
        int n = nums.size();
        int mini = nums[0];
        int ans = INT_MIN;
        for(auto x : nums){
            if(x < mini){
                mini = x;
            }
            ans = max(ans, x-mini);
        }
        return ans;
    }
};