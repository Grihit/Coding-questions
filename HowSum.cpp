//Given a target sum and a set of numbers, find any combination of those numbers that add up to the target sum. Print -1 if no such combination exists.
#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

vector<int> HowSum(int target,int num[],int n,unordered_map<int,vector <int>>&memo,vector <int> &arr){
    if(memo.find(target) != memo.end()){
        return memo[target];
    }
    if(target == 0)
    {
        vector<int> temp;
        temp.push_back(0);
        return temp;
    }
    if(target < 0)
        {
            vector<int> temp;
            temp.push_back(-1);
            return temp;
        }
    for(int i=0;i<n;++i)
    {
        int remainder = target - num[i];
        vector<int> result = HowSum(remainder,num,n,memo,arr);
        //cout<<result[0];
        if(result[0] != -1)
        {
            arr.push_back(num[i]);
            memo[target] = arr;
            return memo[target];
        }
    }
    vector<int> temp;
    temp.push_back(-1);
    memo[target] = temp;
    return temp;
}

int main()
{
    unordered_map<int,vector<int>> memo;
    vector <int> arr;
    int num[] = {2,3};
    int n = sizeof(num)/sizeof(num[0]);
    vector<int>p;
    p = HowSum(7,num,n,memo,arr);
    for(int x : p)
        cout<<x<<" ";
    // cout<<endl;
    // for (auto x : memo)
    // {
    //    cout<<x.first<<" [ ";
    //    for(int i : x.second)
    //         cout<<i<<" ";
    //     cout<<"]\n";
    // }
}