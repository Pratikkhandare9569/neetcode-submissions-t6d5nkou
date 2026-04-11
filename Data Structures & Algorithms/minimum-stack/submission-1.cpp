class MinStack {
    stack<int> st;
    stack<int> minStack;
public:
    MinStack() {
      
    }
    
    void push(int val) {
        st.push(val);
        if(minStack.empty())
        {
            minStack.push(val);
        }
        else
        {
            minStack.push(min(val,minStack.top()));
        }
    }
    
    void pop() {
        if(st.empty())
        {
            return;
        }
        st.pop();
        minStack.pop();
    }
    
    int top() {
          if(!st.empty())
        {
        return st.top();
        }
    }
    
    int getMin() {
        if(!minStack.empty())
        {
          return minStack.top();
        }
    }
};
