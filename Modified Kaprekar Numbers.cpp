#include <bits/stdc++.h>

using namespace std;

int digit(long int num)
{
    int d=0;
    while(num>0)
    {
        num=num/10;
        d++;
    }
    return d;
}

long int rev(long int num,int d)
{
    int rev = 0;
    while(d--)
    {
        rev = rev * 10 + num % 10;
        num = num/10;
    }
    return rev;
}

int keplar(long int num1)
{
    long int orignal = num1;
    long int num2=0;
    long int d1=digit(num1);
    long int d2=d1;
    long int num = num1*num1;
    while(d1--)
    {
        num2 = num2 * 10 + num % 10;
        num = num/10;
    }
    num2=rev(num2,d2);
    if(num + num2 == orignal)
    {
        cout<<orignal<<" ";
        return 1;
    }
    else {
        return 0;
    }
}

int main()
{
    int p,q,check,f=0;
    cin>>p>>q;
    for(long int i=p;i<=q;i++)
    {
        check = keplar(i);
        if(check == 1)
            f=1;
    }
    if(f==0)
        cout<<"INVALID RANGE";
}
