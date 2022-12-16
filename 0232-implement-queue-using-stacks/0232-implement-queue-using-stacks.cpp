class MyQueue {
    int f;
    stack<int> s1;
    stack<int> s2;
public:
    MyQueue() {
        
    }
    
    void push(int x) {
        if(s1.size()==0)
            f=x;
        s1.push(x);
    }
    
    int pop() {
        if(s2.size()==0){
            while(s1.size()!=0)
                {
                s2.push(s1.top());
                s1.pop();
                }
        }
        int t = s2.top();
        s2.pop();
        return t;
    }
    
    int peek() {
        if(s2.size()!=0)
            return s2.top();
        return f;
    }
    
    bool empty() {
        return s1.size()==0&&s2.size()==0;
    }
};

/**
 * Your MyQueue object will be instantiated and called as such:
 * MyQueue* obj = new MyQueue();
 * obj->push(x);
 * int param_2 = obj->pop();
 * int param_3 = obj->peek();
 * bool param_4 = obj->empty();
 */