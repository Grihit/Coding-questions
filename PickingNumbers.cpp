#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,a[100],temp,max=0;
    cin>>n;
    for(int i=0;i<n;i++)
        cin>>a[i];
    for(int i=0;i<n;i++)
    {
        temp=0;
        for(int j=0;j<n;j++)
        {
                if(a[i]-a[j]==1 || a[i]-a[j]==0){
                    temp++;
                    //cout<<"a[i]: "<<a[i]<<" a[j]: "<<a[j];
                }
                if(temp>max)
                    max=temp;
        }
    }
    cout<<max;
    return 0;
}
