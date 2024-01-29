
https://leetcode.com/problems/implement-queue-using-stacks/description/?envType=daily-question&envId=2024-01-29

class MyQueue {
public:
stack<int> st;
    MyQueue() {
        
    }
    
    void push(int x) {
        stack<int> s1;
        while(!st.empty()){
            s1.push(st.top());
            st.pop();
        }   

        st.push(x);
        while(!s1.empty()){
            st.push(s1.top());
            s1.pop();
        }
        return ;
    }
    
    int pop() {
        int x = st.top();
        st.pop();
        return x;
        
    }
    
    int peek() {
        int x = st.top();
        return x;
    }
    
    bool empty() {
        return st.empty();
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
