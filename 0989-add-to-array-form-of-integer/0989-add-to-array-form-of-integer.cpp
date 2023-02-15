class Solution {
public:
    vector<int> addToArrayForm(vector<int>& num, int k) {
        int N  = num.size();
        int cur =k;
        vector<int> ans;
        int i= N;
        while(--i>=0||cur>0){
            if(i>=0)
                cur+=num[i];
            ans.push_back(cur%10);
            cur/=10;
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }
};