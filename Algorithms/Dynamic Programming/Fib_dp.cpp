#include <iostream>
#include <vector>
#include <string>
#include <unordered_map>

using namespace std;

unsigned long long fib(int n, unordered_map<unsigned long long,unsigned long long> &m)
{
    if(m.find(n) != m.end())
        return m[n];
    if(n<=2)
        return 1ULL;
    m[n] = fib(n-1,m) + fib(n-2,m);
    return m[n];
    
}

int main()
{
    unordered_map<unsigned long long,unsigned long long> m;
    int n;
    cin>>n;
    cout<<endl<<fib(n,m);
    //for (auto x : m)
      //cout << x.first << " " << x.second << endl;
}