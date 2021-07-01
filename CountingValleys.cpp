#include <bits/stdc++.h>

using namespace std;
int main()
{
    int steps,check=0,level=0,valley=0;
    char path[1000000];
    cin>>steps;
    for(int i=0;i<steps;i++)
        cin>>path[i];
    for(int i=0;i<steps;i++)
    {
        if(path[i]=='U')
            level++;
        else
            level--;
        if(level==0)
            check=0;
        if(level<0 && check==0)
        {
            valley++;
            check=1;
        }
    }
    cout<<valley;
    return 0;
}

