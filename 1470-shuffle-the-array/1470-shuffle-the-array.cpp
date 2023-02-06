class Solution {
public:
    vector<int> shuffle(vector<int>& nums, int n) {
        vector<int> st;
        int t = n;
        for(int i=0;i<n;i++,t++){
            st.push_back(nums[i]);
            st.push_back(nums[t]);
        }
        
        return st;
    }
};