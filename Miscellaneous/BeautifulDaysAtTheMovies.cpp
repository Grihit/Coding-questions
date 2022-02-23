#include <bits/stdc++.h>

using namespace std;


int reverse(int a)
{
    int rem,rev=0;
    while(a>0)
    {
        rem = a % 10;
        rev = rev * 10 + rem;
        a = a/10; 
    }
    return rev;
}

int main()
{
    int i,j,k,rev,count=0;
    cin>>i>>j>>k;
    for(int a=i;a<=j;a++)
    {
        rev = reverse(a);
        if(abs(a - rev) % k == 0)
            count++;
    }
    cout<<count;
}
