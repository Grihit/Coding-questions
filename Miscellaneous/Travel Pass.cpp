#include <iostream>
using namespace std;

int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    int n,a,b,sum=0;
	    string str;
	    cin>>n>>a>>b;
	    cin>>str;
	    for(int i=0;i<n;++i)
	    {
	        if(str[i]=='0')
	            sum = sum + a;
	        else
	            sum = sum + b;
	    }
	    cout<<sum<<endl;
	}
	return 0;
}
