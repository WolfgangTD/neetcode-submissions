class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<int> logic;
        for(string s : tokens){
            if(s == "+"){
                int second = logic.top();
                logic.pop();
                int first = logic.top();
                logic.pop();
                logic.push(add(first, second));
            }else if(s == "-"){
                int second = logic.top();
                logic.pop();
                int first = logic.top();
                logic.pop();
                logic.push(sub(first,second));
            }else if (s == "*"){
                int second = logic.top();
                logic.pop();
                int first = logic.top();
                logic.pop();
                logic.push(multi(first, second));
            }else if(s == "/"){
                int second = logic.top();
                logic.pop();
                int first = logic.top();
                logic.pop();
                logic.push(div(first,second));
            }else{
                int num = stoi(s);
                logic.push(num);
            }
        }
        return logic.top();
    }
    int add(int first, int second){
        return first+second;
    }
    int sub(int first, int second){
        return first-second;
    }
    int multi(int first, int second){
        return first*second;
    }
    int div(int first, int second){
        return floor(first/second);
    }
};
