#include <bits/stdc++.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,odd,even,count=0,sum=0;
	    cin>>n;
	    int a[n];
	    for(int i=0;i<n;i++)
	        cin>>a[i];
	    even = n/2;
	    if(n%2 == 0)
	    {
	        odd = n/2;
	    }
	    else
	    {
	        odd = n/2 + 1;
	    }
	    for(int i=0;i<n;i++)
	    {
	        if(a[i]%2==0 && odd>0)
	        {
	            sum = sum + 1;
	            odd--;
	        }
	        else if(a[i]%2!=0 && even>0)
	        {
	            sum = sum + 1;
	            even --;
	        }
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
