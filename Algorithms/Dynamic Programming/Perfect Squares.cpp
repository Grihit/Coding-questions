class Solution {
public:
    int dp(vector<int>& ps, int n, int memo[10001]){
        if(n<0)
            return INT_MIN;
        if(memo[n]!=0)
            return memo[n];
        if(n==0)
            return 0;
        int min = INT_MAX-1;
        for(int i=0;i<ps.size();++i){
            int rem = n - ps[i];
            int val = 1 + dp(ps,rem,memo);
            if(val>0){
                if(val<min)
                    min = val;
            }
        }
        return memo[n] = min;
    }
    
    int numSquares(int n) {
        vector<int> ps;
        static int memo[10001];
        for(int i=1;i<=sqrt(n);++i)
            ps.push_back(i*i);
        return dp(ps,n,memo);
    }
};
