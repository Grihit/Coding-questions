#include <bits/stdc++.h>

using namespace std;



int main()
{
    int n,k,a[100],max=0;
    cin>>n>>k;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        if(a[i]>max)
            max=a[i];
    }
    if(k>max)
        cout<<0;
    else {
        cout<<max-k;
    }
    return 0;
}
