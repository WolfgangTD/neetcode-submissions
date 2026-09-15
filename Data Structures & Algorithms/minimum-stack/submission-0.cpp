class MinStack {
    vector<pair<int, int>> stack;
    int pointToMin;
public:
    MinStack() {
        this->pointToMin = 0;
    }
    
    void push(int val) {
        stack.push_back({val, pointToMin});
        if(val <= stack[pointToMin].first){
            pointToMin = stack.size()-1;
        }
    }
    
    void pop() {
        pointToMin = stack.back().second;
        stack.pop_back();
    }
    
    int top() {
        return stack.back().first;
    }
    
    int getMin() {
        return stack[pointToMin].first;
    }
};
