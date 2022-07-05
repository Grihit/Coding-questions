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

//Takes less time
// class Solution {
// public:
//     vector<vector<string>> partition(string s) {
//         vector<vector<string>> result;
//         vector<string> currentList;
//         dfs(result, s, 0, currentList);
//         return result;
//     }

//     void dfs(vector<vector<string>> &result, string &s, int start, vector<string> &currentList) {
//         if (start >= s.length()) result.push_back(currentList);
//         for (int end = start; end < s.length(); end++) {
//             if (isPalindrome(s, start, end)) {
//                 // add current substring in the currentList
//                 currentList.push_back(s.substr(start, end - start + 1));
//                 dfs(result, s, end + 1, currentList);
//                 // backtrack and remove the current substring from currentList
//                 currentList.pop_back();
//             }
//         }
//     }

//     bool isPalindrome(string &s, int low, int high) {
//         while (low < high) {
//             if (s[low++] != s[high--]) return false;
//         }
//         return true;
//     }
// };

