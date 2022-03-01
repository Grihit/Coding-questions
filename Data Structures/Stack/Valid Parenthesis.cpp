class Solution {
public:
    bool isValid(string s) {
        stack<char> s1;
        s1.push('a');
        for(int i=0;i<s.size();++i)
        {
            if(s[i] == '(' || s[i] == '[' || s[i] == '{')
                s1.push(s[i]);
            else
            {
                if((s1.top() == '(' && s[i] == ')') || (s1.top() == '[' && s[i] == ']') || (s1.top() == '{' && s[i] == '}'))
                    s1.pop();
                else
                    s1.push(s[i]);
            }
        }
        return s1.size() == 1;
    }
};
