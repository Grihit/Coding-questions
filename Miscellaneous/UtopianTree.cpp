#include <bits/stdc++.h>

using namespace std;

int main()
{
    int t;
    cin>>t;
    while(t--)
    {
        int n,tree=1;
        cin>>n;
        for(int i=1;i<=n;i++)
        {
            if((i-1)%2==0)
            {
                tree=tree*2;
            }
            else 
                tree++;  
        }
        cout<<tree<<endl;
    }
    return 0;
}
