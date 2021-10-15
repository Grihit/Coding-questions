class Solution {
public:
    int myAtoi(string s) {
        int flag=0;
        long ans=0;
        int count=0;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]==' ' && count<1)
                continue;
            else if(s[i]=='-' && count<1)
            {
                count++;
                flag=1;
            }
            else if(s[i]=='+' && count<1)
            {
                count++;
                continue;
            }
            else if(!(s[i]>=48 && s[i]<=57))
                break;
            else if(s[i]>=48 && s[i]<=57)
            {
                count++;
                ans = ans*10 + (long)(s[i]-48);
                if(ans>INT_MAX)
                    break;
            }
        }
        if(flag==1)
            ans = ans - 2*ans;
        if(ans>INT_MAX)
            return INT_MAX;
        if(ans<INT_MIN)
            return INT_MIN;
        return (int)ans;
    }
};
