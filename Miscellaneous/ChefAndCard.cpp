#include <iostream>
using namespace std;
int power(int a)
{
    int temp,rem,sum=0;
    temp=a;
    while(temp>0)
    {
        rem=temp%10;
        sum=sum+rem;
        temp=temp/10;
    }
    return sum;
}
int main() {
	int t;
	cin>>t;
	while(t--)
	{
	    long int n,a,b,sum_a=0,sum_b=0,pa,pb,i;
	    cin>>n;
	    for(i=0;i<n;i++)
	    {
	        cin>>a>>b;
	        pa=power(a);
	        pb=power(b);
	        //cout<<pa<<"    "<<pb<<endl;
	        if(pa>pb)
	            sum_a++;
	        else if(pb>pa)
	            sum_b++;
	        else
	        {
	            sum_a++;
	            sum_b++;
	        }
	    }
	    if(sum_a>sum_b)
	        cout<<"0 "<<sum_a<<endl;
	    else if(sum_b>sum_a)
	        cout<<"1 "<<sum_b<<endl;
	    else
	        cout<<"2 "<<sum_a<<endl;
	}
	return 0;
}
