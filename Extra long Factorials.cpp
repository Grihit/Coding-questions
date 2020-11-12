#include <bits/stdc++.h>

using namespace std;
int size(int num)
{
    int s=0;
    while(num)
    {
        num=num/10;
        s++;
    }
    return s;
}
/*int multiply(int temp[],int i)
{
    int carry,result,product[1000];
    carry=result=0;
    if(i==1)
        return temp;
    else
    {
        for(int j=0;j<1000;j++)
        {
            if(temp[j]>=0)
            {
                result=temp[j]*i + carry;
                product[j]=result%10;
                carry=result/10;
            }
            temp=product;
        }
        multiply(temp,i--);
    }
}*/
int main()
{
    int n,i,temp[1000],s,result,carry,m;
    cin>>n;
    s=size(n);
    m=n;
    for(i=0;i<s;i++)
    {
        temp[i]=m%10;
        m=m/10;
    }
    for(i=s;i<1000;i++)
        temp[i]=-1;
    carry=0;
    for(i=n-1;i>1;i--)
    {
        result=11;
        for(int j=0;j<1000;j++)
        {
            //if(result/10>0)
            //{
                if(temp[j]>=0)
                {
                    //cout<<"||"<<temp[j];
                    result=temp[j]*i + carry;
                    carry=result/10;
                    temp[j]=result%10;
                    //cout<<"||"<<result<<"R"<<carry<<"C ";
                }
                else if(carry>0)
                {
                    temp[j]=carry%10;
                    carry=carry/10;
                    //cout<<"||"<<temp[j];
                }
            //}
        }
        for(int j=0;temp[j]>=0;j++)
            //cout<<temp[j]<<"S";
        carry=0;
    }
    //i=n-1;
    //product=multiply(temp,i);
    for(i=999;i>=0;i--)
    {
        if(temp[i]>=0)
            cout<<temp[i];
    }
    return 0;
}