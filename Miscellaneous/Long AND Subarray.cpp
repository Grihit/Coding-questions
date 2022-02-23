#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,temp,val1,val2;
	    cin>>n;
	    temp = log2(n);
	    val1 = n - pow(2,temp) + 1;
	    val2 = pow(2,temp-1);
	    if(val1>val2)
	        cout<<val1<<endl;
	    else
	        cout<<val2<<endl;
    }
    return 0;
}
