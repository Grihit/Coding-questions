class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        unordered_map<char,int> m;
        int count = 0, max = 0,k;
        for(int j=0;j<s.size();++j)
        {
            for(auto k : m)
                m[k.first] = 0;
            count = 0;
            for(int i=j;i<s.size();++i)
            {
                count++;
                //cout<<count<<' ';
                m[s[i]]++;
                if(m[s[i]]>1)
                {
                    count--;
                    if(count>max)
                    {
                        //cout<<s[i];
                        max =  count;
                    }
                    break;
                }
            }
            if(count>max)
                max=count;
        }
        if(s.size() == 0)
            return 0;
        return max;
    }
};
