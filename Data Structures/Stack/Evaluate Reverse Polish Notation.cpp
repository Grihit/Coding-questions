class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        stack<string> s;
        for(int i=0;i<tokens.size();++i)
        {      
            if(tokens[i] == "+" || tokens[i] == "-" || tokens[i] == "/" || tokens[i] == "*"){
                int a = std::stoi(s.top());
                s.pop();
                int b = std::stoi(s.top());
                s.pop();
                int res;
                if(tokens[i] == "+")
                    res = a+b;
                else if(tokens[i] == "-")
                    res = b-a;
                else if(tokens[i] == "/")
                    res = b/a;
                else
                    res = a*b;
                //cout<<res<<" ";
                s.push(to_string(res));
            }
            else{
               s.push(tokens[i]); 
            }
        }
        return std::stoi(s.top());
    }
};
