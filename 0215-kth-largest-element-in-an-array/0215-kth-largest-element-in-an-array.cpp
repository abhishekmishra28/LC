class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        int n = nums.size();
        priority_queue<int> heap;
        for(int i=0;i<n;i++)
            heap.push(nums[i]);

        for(int i=0;i<k-1;i++)
            heap.pop();

        return heap.top();
    }
};