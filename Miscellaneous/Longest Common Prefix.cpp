class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        if(strs.size() == 0)
            return "";
        sort(strs.begin(),strs.end());
        string first = strs[0];
        string last = strs[strs.size()-1];
        int count = 0, i=0;
        while(i<first.size()){
            if(first[i] == last[i]){
                i++;
                count++;
            }
            else
                break;
        }
        return first.substr(0, count);
    }
};
