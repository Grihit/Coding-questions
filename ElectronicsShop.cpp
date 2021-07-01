#include <bits/stdc++.h>

using namespace std;

int main()
{
    int b,n,m,key[1000],usb[1000],max=0;
    cin>>b>>n>>m;
    for(int i=0;i<n;i++)
        cin>>key[i];
    for(int i=0;i<m;i++)
        cin>>usb[i];
    for(int i=0;i<n;i++)
        for(int j=0;j<m;j++)
        {
            if(key[i] + usb[j] == b)
            {
                max=b;
                break;
            }
            if(key[i] + usb[j]>max && key[i] + usb[j]<b)
                max = key[i] + usb[j];
            
        }
    if(max==0)
        cout<<-1;
    else
        cout<<max;
    return 0;   
}
