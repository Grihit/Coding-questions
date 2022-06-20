#include <bits/stdc++.h> 
int LongestSubsetWithZeroSum(vector < int > arr) {
    unordered_map<int,int> hash;
    int sum = 0, count = 0, maxCount = 0;
    for(int i=0;i<arr.size();++i){
        sum += arr[i];
        if(sum == 0)
                maxCount = max(maxCount, i+1);
        if(hash.find(sum) != hash.end()){
            count = abs(hash[sum] - i);
            maxCount = max(maxCount, count);
            hash[sum] = min(hash[sum], i);
        }
        else
            hash[sum] = i;
    }
    return maxCount;

}
