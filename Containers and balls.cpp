#include <bits/stdc++.h>

using namespace std;

int main()
{
    int s;
    cin>>s;
    while(s>0){
        int input[1000][1000],n,type[1000],container[1000],check=0;
        cin>>n;
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                cin>>input[i][j];
        for(int i=0;i<n;++i)
            for(int j=0;j<n;++j)
                container[i]=container[i] + input[i][j];
        for(int j=0;j<n;++j)
            for(int i=0;i<n;++i)
                type[j]=type[j] + input[i][j];
        sort(container, container + n);
        sort(type, type+n);
        for(int i=n-1;i>=0;--i)
        {
            if(type[i]>container[i])
            {
                check=1;
                break;
            }
        }
        for(int i=n-1;i>=0;--i)
        {
            type[i]=0;
            container[i]=0;
        }
        if(check==1)
            cout<<"Impossible\n";
        else
            cout<<"Possible\n";
        s--;
    }
}
