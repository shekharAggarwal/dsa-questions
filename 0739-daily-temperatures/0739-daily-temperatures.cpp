class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& t) {
        vector<int> sol(t.size(),0);
        stack<int> st;
        for(int i=t.size()-1;i>=0;i--)
        {
           while(!st.empty()&&t[i]>=t[st.top()])
               st.pop();
            if(st.empty())
                sol[i]=0;
            else
                sol[i]=st.top()-i;
            st.push(i);
        }
        
        return sol;
    }
};