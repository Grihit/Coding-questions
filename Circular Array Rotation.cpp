#include <bits/stdc++.h>

using namespace std;

int main(){
    int n,k,q;
    cin>>n>>k>>q;
    int num[n],queries[q],cir_arr[n];
    for(int i=0;i<n;++i)
        cin>>num[i];
    for(int i=0;i<q;++i)
        cin>>queries[i];
    for(int i=0;i<n;++i)
        cir_arr[(i + k) % n] = num[i];
    for(int i=0;i<q;++i)
        cout<<cir_arr[queries[i]]<<endl;
}
