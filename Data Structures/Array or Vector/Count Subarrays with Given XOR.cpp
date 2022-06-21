#include <bits/stdc++.h> 
int subarraysXor(vector<int> &arr, int x)
{
    unordered_map<int,int> hash;
    int val = 0, count = 0;
    for(int i=0;i<arr.size();++i){
        val = val ^ arr[i];
        if(val == x)
            count++;
        if(hash.find(val^x) != hash.end())
            count += hash[val^x];
        hash[val]++;
    }
    return count;
}
