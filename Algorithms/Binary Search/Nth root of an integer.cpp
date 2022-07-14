double multiply(double num, int n){
    double ans = 1.0;
    while(n>0){
        ans = ans*num;
        n--;
    }
    return ans;
}

double findNthRootOfM(int n, long long m) {
	double l=1, u=(double)m, mid, eps = 1e-8;
    while((u-l)>eps){
        mid = (l+u)/2.0;
        if(multiply(mid,n)>(double)m)
            u=mid;
        else
            l=mid;
    }
    return l;
}
