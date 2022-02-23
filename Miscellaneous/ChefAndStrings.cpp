#include <iostream>
#include <stdlib.h>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,a[1000000],sum,i;
	    sum=0;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a[i];
	    }
	    for(i=0;i<n-1;i++)
	    {
	        sum=sum + abs(a[i+1]-a[i])-1;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
