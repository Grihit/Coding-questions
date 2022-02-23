class Solution {
public:
    int dp(string& s, int i, int memo[101])
    {
        if(i>=s.length())
            return 1;
        if(memo[i]!=-1)
            return memo[i];
        if(s[i] == '0')
            return 0;
        if(s[i] != '1' && s[i] != '2')
                return memo[i] = dp(s,i+1,memo);
        if(i!=s.length()-1)
        {
            if(s[i] == '1')
                return memo[i] = dp(s,i+1,memo) + dp(s,i+2,memo);
            if(s[i+1] != '7' && s[i+1] != '8' && s[i+1]!='9')
                return memo[i] = dp(s,i+1,memo) + dp(s,i+2,memo);
        }
        return memo[i] = dp(s,i+1,memo);        
    }
    
    int numDecodings(string s) {
        int memo[101];
        memset(memo,-1,sizeof(memo));
        return dp(s,0,memo);
    }
};
