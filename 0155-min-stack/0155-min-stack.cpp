class MinStack {
public:
    stack<long long> st;
    long long min;
    MinStack(){
       min=LLONG_MAX;  
    }
    void push(int val) {
        long long x= (long long)val;
        if(st.size()==0){
            st.push(x);
            min=x;
        }
        else if(val>=min) st.push(x);
        else{
            st.push(2*x-min);
            min=x;
        }
    }
    void pop() {
        if(st.top()<min){
           long long oldmin=2*min-st.top();
            min=oldmin;
        }
        st.pop();
    }
    int top() {
        if(st.top()<min) return min;
        else return st.top();
    }
    int getMin() {
        return min;
    }
};



/**
 * Your MinStack object will be instantiated and called as such:
 * MinStack* obj = new MinStack();
 * obj->push(value);
 * obj->pop();
 * int param_3 = obj->top();
 * int param_4 = obj->getMin();
 */
     // int getMin() {
    //     stack<int> helper;
    //     int mn=INT_MAX;
    //     while(st.size()>0){
    //         mn=min(mn,st.top());
    //         helper.push(st.top());
    //         st.pop();
    //     }
    //     while(helper.size()>0){
    //         st.push(helper.top());
    //         helper.pop();
    //     }
    //     return mn;