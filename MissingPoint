#include <iostream>
#include <algorithm>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,x[10000000],y[10000000],a,b,i,j,flag;
	    cin>>n;
	    for(i=0;i<4*n-1;i++)
	    {
	        cin>>x[i]>>y[i];
	    }
	    sort(x,x+(4*n-1));
	    sort(y,y+(4*n-1));
	    flag=1;
	    for(i=0;i<4*n-2;i++)
	    {
	        if(x[i]==x[i+1])
	            flag++;
	        else if(x[i]!=x[i+1] && flag%2!=0)
	        {
	            a=x[i];
	            break;
	        }
	        else if(x[i]!=x[i+1])
	        {
	            flag=1;
	        }
	    }
	    flag=1;
	    for(i=0;i<4*n-2;i++)
	    {
	        if(y[i]==y[i+1])
	            flag++;
	        else if(y[i]!=y[i+1] && flag%2!=0)
	        {
	            b=y[i];
	            break;
	        }
	        else if(y[i]!=y[i+1])
	        {
	            flag=1;
	        }
	    }
	    if(x[4*n-2]!=x[4*n-3])
	        a=x[4*n-2];
	    if(y[4*n-2]!=y[4*n-3])
	        b=y[4*n-2];
	    cout<<a<<" "<<b<<endl;
	}
	return 0;
}
