#include <bits/stdc++.h>

struct knapsackItems{
    int weight;
    int value;
    double ratio;
};

bool cmp(knapsackItems a, knapsackItems b){
    if(a.ratio>=b.ratio) return true;
    return false;
}

double maximumValue (vector<pair<int, int>>& items, int n, int w)
{
    struct knapsackItems knapsackItem[n];
    for(int i=0;i<n;++i){
        knapsackItem[i].weight = items[i].first;
        knapsackItem[i].value = items[i].second;
        knapsackItem[i].ratio = (double)items[i].second/(double)items[i].first;
    }
    
    sort(knapsackItem, knapsackItem + n, cmp);
    //cout<<knapsackItem[0].ratio;
    int i=0;
    double sum = 0;
    while(w>0 && i<n){
        if(w>=knapsackItem[i].weight){
            sum += knapsackItem[i].value;
            w -= knapsackItem[i].weight;
        }
        else{
            sum += knapsackItem[i].ratio * w;
            w = 0;
        }
        //cout<<w<<" ";
        ++i;
    }
    return sum;
}
