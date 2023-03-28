class Solution {
public:
    int mincostTickets(vector<int>& days, vector<int>& costs) {
        vector<int> cds = {1, 7, 30};
        vector<int> mc(days.back()+1, INT_MAX);
        mc[0] = 0;
        int k = 0;
        for(int i=1; i<=days.back(); i++) {
            if(k<days.size() && i != days[k]) {
                mc[i] = mc[i-1];
                while(k<days.size() && i>days[k])
                    k++;          
                continue;
            }
            for(int c=0; c<costs.size(); c++)
                mc[i] = min(mc[i], mc[max(0, i-cds[c])]+costs[c]);
            k++;
        }
        return mc.back();
    }
};