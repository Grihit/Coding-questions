#include<bits/stdc++.h>
bool cmp(vector<int>a, vector<int>b){
    if(a[1]>b[1]) return true;
    return false;
}

int jobScheduling(vector<vector<int>> &jobs)
{
    unordered_set<int> priority;
    sort(jobs.begin(),jobs.end(),cmp);
    //cout<<jobs[0][0]<<" "<<jobs[0][1];
    int sum = 0;
    for(int i=0;i<jobs.size();++i){
        if(priority.count(jobs[i][0])){
            int check = jobs[i][0]-1;
            while(check>0){
                if(!priority.count(check)){
                    sum += jobs[i][1];
                    priority.insert(check);
                    break;
                }
                check--;
            }
        }
        else{
            //cout<<jobs[1][i]<<" ";
            sum += jobs[i][1];
            priority.insert(jobs[i][0]);
        }
    }
    return sum;
}
