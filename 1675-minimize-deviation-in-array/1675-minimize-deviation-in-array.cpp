class Solution {
public:
    int minimumDeviation(vector<int>& nums) {
        set <int>  s;
        for(int i = 0; i<nums.size() ; ++i)
        {
            if(nums[i] & 1)
                s.insert(nums[i] * 2);
            else
                s.insert(nums[i]);
        }
        
        int diff = *s.rbegin() - *s.begin();
        
        while(!(*s.rbegin() & 1))
        {
            int x = *s.rbegin();
            s.erase(x);
            s.insert(x>>1);
            diff = min(diff, *s.rbegin() - *s.begin());
        }
        return diff;
    }
};