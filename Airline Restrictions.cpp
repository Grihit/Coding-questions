#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int a,b,c,d,e,val1=INT_MAX,val2=INT_MAX;
	    cin>>a>>b>>c>>d>>e;
	    int a_b,a_c,b_c;
	    a_b = d - (a + b);
	    a_c = d - (a + c);
	    b_c = d - (b + c);
	    if(a_b<0)
	        a_b = INT_MAX;
	    if(a_c<0)
	        a_c = INT_MAX;
	    if(b_c<0)
	        b_c = INT_MAX;
	    //cout<<a_b<<" "<<a_c<<" "<<b_c<<endl;
	    if(a_b <= a_c && a_b <= b_c && a_b>=0){
	        val1 = a + b;
	        val2=c;
	    }
	    else if(a_c <= a_b && a_c <= b_c && a_c>=0){
	        val1 = a + c;
	        val2 = b;
	    }
	    else if(b_c <= a_b && b_c <= a_c && b_c>=0){
	        val1 = b + c;
	        val2 = a;
	    }
	    //cout<<val1<<" "<<val2;
	    if(val1<=d && val2<=e)
	        cout<<"YES"<<endl;
	    else
	        cout<<"NO"<<endl;
	}
	return 0;
}
