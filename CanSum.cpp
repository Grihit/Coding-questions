#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool calculate(int target,int num[],unordered_map<int,bool>&memo){
    if(memo.find(target) != memo.end())
        return memo[target];
    if(target == 0)
        return true;
    if(target<0)
        return false;
    for(int i=0;i<sizeof(num)/sizeof(num[0]);++i)
    {
        //cout<<num[i]<<" "<<target<<endl;
        int diff = target - num[i];
        if(calculate(diff,num,memo))
        {
            memo[target] = true;
            return true;
        }
    }
    memo[target] = false;
    return false;
}

int main()
{
    int target;
    unordered_map<int,bool> memo;
    int num[] = {7,14};
    cout<<calculate(300,num,memo);
    //for (auto x : memo)
      //cout << x.first << " " << x.second << endl;
}