class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> st;
        long long int t;
        for(auto i:tokens){
           
                if(i=="+"){
                    t= st.top();
                    st.pop();
                    t+=st.top();
                    st.pop();
                    st.push(t);
                }
            else if(i=="-"){
                t= st.top();
                    st.pop();
                    t=st.top()-t;
                    st.pop();
                    st.push(t);
                    
            }
                else if(i=="*"){
                    t= st.top();
                    st.pop();
                    t*=st.top();
                    st.pop();
                    st.push(t);
                    
                }
                 else if(i=="/"){
                    t= st.top();
                    st.pop();
                   t=st.top()/t;
                    st.pop();
                    st.push(t);
                     
                 }
                  else
                      {
                  stringstream geek(i);
                  int x = 0;
    geek >> x;
                  st.push(x);}
            
        }
        return st.top();
    }
};