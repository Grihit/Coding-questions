//Calculate the number of ways in which a person can walk from top left to the bottom right of a mxn grid. The person can only walk down or right.

#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

unsigned long long calculate(int m, int n, unordered_map<string,unsigned long long> &memo)
{
    string key = to_string(m) + ',' + to_string(n);
    string equal_key = to_string(n) + ',' + to_string(m);
    if(memo.find(key) != memo.end())
        return memo[key];
    if(m==1 && n==1)
        return 1;
    if(m==0 || n==0)
        return 0;
    memo[key] = calculate(m-1,n,memo) + calculate(m,n-1,memo);
    memo[equal_key] = memo[key];
    return memo[key];
}

int main()
{
    int m,n;
    unordered_map<string,unsigned long long> memo;
    cin>>m>>n;
    cout<<calculate(m,n,memo);
    //for (auto x : memo)
      //cout << x.first << " " << x.second << endl;
}
