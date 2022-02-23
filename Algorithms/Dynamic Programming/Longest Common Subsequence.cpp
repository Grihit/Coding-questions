class Solution {
public:
    int MAX(int a,int b)
    {
        return (a>b) ? a : b;
    }
    
    int dp(string &text1, string &text2,int i,int j,int memo[][1001]) {
        if(i<0 || j<0)
            return 0;
        
        if(memo[i][j]!=-1)
            return memo[i][j];
        
        if(text1[i]==text2[j])
        {
            memo[i][j]= dp(text1,text2,i-1,j-1,memo) + 1;
            return memo[i][j];
        }
        else
        {
            memo[i][j]= MAX(dp(text1,text2,i-1,j,memo),dp(text1,text2,i,j-1,memo));
            return memo[i][j];
        }
    }
    
    int longestCommonSubsequence(string text1, string text2) {
        int memo[1001][1001];
        memset(memo,-1,sizeof(memo));
        return dp(text1,text2,text1.size()-1,text2.size()-1,memo);
    }
};
