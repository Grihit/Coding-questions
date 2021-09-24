#include <bits/stdc++.h>

using namespace std;


int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,m,c,flag=0,val=0,w=0;
        cin>>n>>c>>m;
        val = val + n/c;
        w = w + val;
        while(flag == 0)
        {
            if(w<m)
            {
                flag=0;
                break;
            }
            else 
            {
                val = val + w/m;
                w = w/m + w%m;    
            }
        }
        cout<<val<<endl;
    }
}
