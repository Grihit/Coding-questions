#include <bits/stdc++.h>
#include <string>
using namespace std;

int main()
{
    int h[26],len=0,max=0,temp;
    string str;
    for(int i=0;i<26;i++)
        cin>>h[i];
    cin>>str;
    for(int i=0;i<str.length();i++)
    {
        if(str[i]>='a' && str[i]<='z')
        {
            len++;
            temp = h[int(str[i]) - 97];
            if(temp>max)
                max=temp;
        }
    }    
    cout<<max*len;
    return 0;
}
