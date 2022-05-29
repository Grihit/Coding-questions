class Solution {
public:
    void calculate(int n, int open, int close, vector<string>& ans, string combination){
        //cout<<combination<<" "<<open<<" "<<close<<" "<<n;
        if(open>n)
            return;
        if(close == n){
            if(close == open)
                ans.push_back(combination);
            return;
        }
        if(close>open){
            return;
        }
        calculate(n,open+1,close,ans,(combination+"("));
        calculate(n,open,close+1,ans,(combination+")"));
        
    }
    
    vector<string> generateParenthesis(int n) {
        vector<string> ans;
        calculate(n,0,0,ans,"");
        return ans;
    }
};
