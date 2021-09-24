#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[1000],i,count=1,sum=0;
    cin>>n;
    for(i=0;i<n;i++)
        cin>>a[i];
    sort(a,a+n);
    for(i=1;i<n;i++)
    {
        if(a[i]==a[i-1])
        {
            count++;
            //cout<<"\t"<<count;
        }
        else
        {
            sum=sum+count/2;
            count=1;
        }
    }
    if(count>1)
        sum=sum+count/2;
    cout<<sum;    
}

