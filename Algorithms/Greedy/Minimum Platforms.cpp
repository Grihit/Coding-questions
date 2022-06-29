#include <bits/stdc++.h>
int calculateMinPatforms(int at[], int dt[], int n) {
    sort(at,at+n);
    sort(dt,dt+n);
    int maxCount = 0, count = 0, j = 0;
    for(int i=0;i<n;++i){
        if(at[i]<=dt[j]){
            count++;
            maxCount = max(maxCount, count);
        }
        else{
            while(at[i]>dt[j] && j<n){
                count--;
                j++;
            }
            i--;
            if(j == n)
                break;
        }
    }
    return maxCount;
}
