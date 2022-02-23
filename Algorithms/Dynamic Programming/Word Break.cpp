//32/44 test cases pass. Time complexity error
class Solution {
public:
    bool dp(string& s, vector<string>& wordDict, string c, unordered_map<string,bool>& memo)
    {
        if (memo.find(c) != memo.end())
        {
            //cout<<c<<" ";
            return memo[c];
        }
        
        if(c.length()>s.length())
            return memo[c] = false;
        bool check;
        for(int i=0;i<wordDict.size();++i)
        {
            string c1 = c + wordDict[i];
            if(c1[0]!=s[0])
                memo[c1] = false;
            //cout<<c1<<i<<" ";
            if(c1 == s)
                return true;
            else{
                check = dp(s,wordDict,c1,memo);
                if(check == true)
                    break;
            }
        }
        return memo[c] = check;
    }
    
    bool wordBreak(string s, vector<string>& wordDict) {
        unordered_map<string,bool> memo;
        bool ans = dp(s,wordDict,"",memo);
        // for (auto x : memo)
        //     cout << x.first << " " << x.second << endl;
        return ans;
    }
};
