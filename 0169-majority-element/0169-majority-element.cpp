class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n  = nums.size();
        int cnt = 1;
        int major = nums[0];
        for(int i=1;i<n;i++){
            if(nums[i]==major){
                cnt++;
            }else{
                cnt--;
            }
            if(cnt<0){
                cnt=0;
                major = nums[i];
            }
        }
        return major;
    }
};