#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n,d,arr[10000],temp1[10000],temp2[10000],count1=0,count2=0,answer=0;
    cin>>n>>d;
    for(int i=0;i<n;++i)
        cin>>arr[i];
    for(int i=0;i<n;i++)
    {
        temp1[i]=arr[i] - d;
        temp2[i]=arr[i] - 2*d;
    }
    for(int i=0;i<n;i++)
    {
        for(int j=0;j<n;j++)
        {
            if(i!=j)
            {
                if(arr[i]==temp1[j])
                {
                    count1++;
                }
                if(arr[i]==temp2[j])
                {
                    count2++;
                }
            }
        }
        if(count1>count2)
            answer = answer + count2;
        else
            answer = answer + count1;
        count1=0;
        count2=0;
    }
    cout<<answer;
}
