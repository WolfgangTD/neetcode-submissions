class Solution {
public:
    bool isValid(string s) {
        stack<char> stack;
        unordered_map<char, char> map{
            {'}', '{'}, 
            {']', '['}, 
            {')', '('}
        };

        for(char c : s){
            auto it = map.find(c);
            if(!stack.empty() && it != map.end() && it->second == stack.top()){
                stack.pop();
            } else {
                stack.push(c);
            }
        }
        return stack.empty();
    }
};
