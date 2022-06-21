// class Solution {
// public:
//     int lengthOfLongestSubstring(string s) {
//         unordered_map<char,int> m;
//         int count = 0, max = 0,k;
//         for(int j=0;j<s.size();++j)
//         {
//             for(auto k : m)
//                 m[k.first] = 0;
//             count = 0;
//             for(int i=j;i<s.size();++i)
//             {
//                 count++;
//                 //cout<<count<<' ';
//                 m[s[i]]++;
//                 if(m[s[i]]>1)
//                 {
//                     count--;
//                     if(count>max)
//                     {
//                         //cout<<s[i];
//                         max =  count;
//                     }
//                     break;
//                 }
//             }
//             if(count>max)
//                 max=count;
//         }
//         if(s.size() == 0)
//             return 0;
//         return max;
//     }
// };

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
};
