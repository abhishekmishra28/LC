class Solution {
public:
    int missingNumber(vector<int>& nums) {
        int n = nums.size();
        // int sum = accumulate(nums.begin(),nums.end(),0);
        // int s = (n * (n+1))/2;
        // return s - sum;

        int xor1 = 0, xor2 = 0;
        for(int i=0;i<=n;i++){
            xor1 ^= i;
        }
        for(auto x : nums){
            xor2 ^= x;
        }
        return xor1^xor2;
    }
};