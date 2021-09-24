#include <bits/stdc++.h>

using namespace std;


int main()
{
    int n,arr[1000],temp;
    int val = INT_MAX;
    cin>>n;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=0;i<n;++i)
    {
        for(int j=i+1;j<n;++j)
        {
            if(arr[i] == arr[j])
            {
                temp=abs(i-j);
                if(temp<val)
                    val = temp;
            }
        }
    }
    if(val==INT_MAX)
        cout<<-1;
    else
        cout<<val;
}
