class Solution {
public:
    int minimumRounds(vector<int>& tasks) {
        unordered_map<int,int> mp;
        
        for(auto i: tasks)
            mp[i]++;
        int m =0;
        for(auto [f,s]:mp)
        {
            if(s==1)
                return -1;
            if(s%3==0)
                m+=s/3;
            else
                m+=(s/3)+1;
        }
        return m;
    }
};