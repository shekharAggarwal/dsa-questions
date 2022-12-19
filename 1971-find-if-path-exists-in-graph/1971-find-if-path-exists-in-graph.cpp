class Solution {
public:
    bool validPath(int n, vector<vector<int>>& edges, int start, int end) {
        unordered_map<int,vector<int>> ump;
        for(auto i:edges){
            ump[i[0]].push_back(i[1]);
            ump[i[1]].push_back(i[0]);
        }
        vector<bool> vi(n+1,false);
        
        queue<int> qu;
        vi[start] =true;
        qu.push(start);
        while(!qu.empty()){
            int s = qu.front();
            qu.pop();
            for(auto i: ump[s]){
                if(!vi[i])
                {
                qu.push(i);
                vi[i]=true;
                }   
            }
            if(vi[end])
                return vi[end];
        }
        return vi[end];
    }
};