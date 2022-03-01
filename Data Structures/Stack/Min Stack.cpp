class MinStack {
private:
    vector<int> s1;
    vector<int> s2;
    int min = INT_MAX;
public:
    MinStack() {
        s2.push_back(min);
    }
    
    void push(int val) {
        if(val <= getMin())
            s2.push_back(val);
        s1.push_back(val);
    }
    
    void pop() {
        if(top() == getMin())
            s2.pop_back();
        s1.pop_back();
    }
    
    int top() {
        return s1.back();
    }
    
    int getMin() {
        return s2.back();
    }
};

/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(val);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
