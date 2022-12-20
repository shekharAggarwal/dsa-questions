class Solution {
public:
    bool canVisitAllRooms(vector<vector<int>>& rooms) {
        vector<bool> vi(rooms.size(),false);
        vi[0]=true;
        queue<int> qu;
        for(auto i:rooms[0]){
            if(!vi[i]){
            qu.push(i);               
            vi[i]=true;
            }
        }
        
        while(!qu.empty()){
            int t = qu.front();
            qu.pop();
            for(auto i:rooms[t]){
            if(!vi[i]){
            qu.push(i);               
            vi[i]=true;
            }
        }
        }
        bool a=true;
        for(auto i:vi)
            a&=i;
        return a;
    }
};