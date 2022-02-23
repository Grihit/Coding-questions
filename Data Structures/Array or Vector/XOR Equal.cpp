#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,x,max=0,sum,c=INT_MAX,sum1,sum2;
	    cin>>n>>x;
	    int a[n];
	    for(int i=0;i<n;++i)
	        cin>>a[i];
	    unordered_map<int, int> m1;
	    unordered_map<int, int> m2;
	    for(int i=0;i<n;++i)
	    {
	        m1[a[i]]++;
	        if(x!=0)
	            m2[a[i]^x]++;
	    }
	    for(int i=0;i<n;++i)
	    {
	        sum1=m1[a[i]] + m2[a[i]];
	        sum2=m1[a[i]^x] + m2[a[i]^x];
	        if(sum1>sum2)
	            sum=sum1;
	        else
	            sum=sum2;
	        if(sum>max)
	        {
	            max=sum;
	            c=m2[a[i]];
	        }
	        else if(sum==max && c>m2[a[i]])
	        {
	            c=m2[a[i]];
	        }
	    }
	    cout<<max<<" "<<c<<endl;
	    
	}
	return 0;
}
