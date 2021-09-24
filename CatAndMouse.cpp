#include <bits/stdc++.h>

using namespace std;

int main()
{
    int q;
    cin>>q;
    while(q--){
        int a,b,m,a_m,b_m;
        cin>>a>>b>>m;
        a_m = abs(a - m);
        b_m = abs(b - m);
        if(a_m<b_m)
            cout<<"Cat A\n";
        else if(a_m>b_m)
            cout<<"Cat B\n";
        else
            cout<<"Mouse C\n";
    }
    return 0;   
}
