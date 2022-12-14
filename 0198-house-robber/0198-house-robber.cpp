class Solution {
public:
    int rob(vector<int>& nums) {
        int n = nums.size();
        if(n == 1) return nums[0];
        
        int p2=nums[0], p=max(nums[0],nums[1]),c=p;
        
        for(int i = 2; i < n; i++){
            c = max(p, p2 + nums[i]);
            p2 = p;
            p = c;
        }
        return c;
    }
};