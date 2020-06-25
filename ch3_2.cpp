#include "cxxlib.hpp"

// 3.2 Stack Min: How would you design a stack which, in addition to push and pop, has a function min which returns the minimum element? Push, pop and min should all operate in O(1) time.

class MinStack {
public:
    /** initialize your data structure here. */
    stack<int> st;
    map<int,int> m;
    
    MinStack() {
        
    }
    
    void push(int x) {
        st.push(x);
        m[x]++;
    }
    
    void pop() {
        int t = st.top();
        m[t]--;
        if (m[t] == 0)
            m.erase(t);
        st.pop();
    }
    
    int top() {
        return st.top();
    }
    
    int getMin() {
        return (m.begin())->first;
    }
};