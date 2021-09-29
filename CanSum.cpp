//Can the target sum be created by addition of a set of numbers or not.
#include <iostream>
#include <vector>
#include <unordered_map>

using namespace std;

bool calculate(int target,int num[],unordered_map<int,bool>&memo,int n){
    if(memo.find(target) != memo.end()){
        return memo[target];
    }
    if(target == 0){
        return true;
    }
    if(target<0){
        return false;
    }
    for(int i=0;i<n;i++)
    {
        //cout<<num[i]<<" "<<target<<endl;
        int diff = target - num[i];
        if(calculate(diff,num,memo,n))
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
    int n = sizeof(num)/sizeof(num[0]);
    cout<<calculate(300,num,memo,n)<<endl;
    //cout<<endl<<c;
    //for (auto x : memo)
      //cout << x.first << " " << x.second << endl;
}