#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin>>n;
    int num[n+1],sol[n+1];
    for(int i=1;i<=n;++i)
        cin>>num[i];
    for(int i=1;i<=n;++i)
    {
        for(int j=1;j<=n;++j)
        {
            if(i == num[j])
            {
                for(int k=1;k<=n;++k)
                {
                    if(j == num[k])
                    {
                        sol[i] = k;
                        break;
                    }
                }
                break; 
            }
        }
    }
    for(int i=1;i<=n;++i)
        cout<<sol[i]<<endl;
}
