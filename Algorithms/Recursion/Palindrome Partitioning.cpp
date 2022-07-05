class Solution {
public:
    bool checkPalindrome(string str){
        string temp = str;
        reverse(str.begin(), str.end());
        return (temp == str);
    }
    
    void palindromePartitioning(string s, vector<vector<string>>& res, vector<string> partition, int i, string temp, int j){
        if(i == s.size()){
            if(j == s.size())
                res.push_back(partition);
            return;
        }
        do{
            if(i == s.size())
                return;
            temp += s[i];
            i++;
        }while(!checkPalindrome(temp));
        j += temp.size();
        //cout<<temp<<" "<<j;
        partition.push_back(temp);
        palindromePartitioning(s, res, partition, i, "", j);
        j -= partition.back().size();
        partition.pop_back();
        palindromePartitioning(s, res, partition, i, temp, j);
    }
    
    vector<vector<string>> partition(string s) {
        vector<vector<string>> res;
        palindromePartitioning(s, res, {}, 0, "", 0);
        return res;
    }
};
