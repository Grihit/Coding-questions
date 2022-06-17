#include <bits/stdc++.h> 

pair<int,int> missingAndRepeating(vector<int> &arr, int n)
{
	sort(arr.begin(), arr.end());
    int sum=arr[0],num=0;
    for(int i=1;i<n;++i){
        sum = sum + arr[i];
        if(arr[i-1] == arr[i])
            num = arr[i];
    }
    int nsum = (n * (n+1))/2;
    int diff = abs(nsum - sum);
    int val = nsum >= sum ? (num + diff) : num - diff; 
    //cout<<nsum<<" "<<sum;
	return {val, num};
}
