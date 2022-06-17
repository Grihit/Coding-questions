class Solution {
public:
    double myPow(double x, int n) {
        long nn = n;
        if(nn == 0)
            return 1;
        if(nn<0){
            nn = -nn;
            x = 1/x;
        }
        return (nn%2 == 0) ? myPow(x*x, nn/2) : x*myPow(x*x, nn/2);
    }
};
