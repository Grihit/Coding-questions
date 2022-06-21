//temp is the left pointer, i is the right pointer
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        if(s.size()<1)
            return 0;
        unordered_map<char,int>hash;
        int temp = 0, maxCount = 0;
        for(int i=0;i<s.size();++i){
            if(hash.find(s[i])!=hash.end()){
                //cout<<s[i]<<" "<<hash[s[i]]<<" "<<temp;
                maxCount = max({maxCount, i - temp});
                temp = max(temp,hash[s[i]]+1);

            }
            hash[s[i]] = i;
        }
        int check = s.size() - temp;
        return max(maxCount, check);
    }
