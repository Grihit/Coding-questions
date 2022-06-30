void cal(vector<int> &num, vector<int> &res, int sum, int i, int flag){
    if(flag == 0)
        res.push_back(sum);
    if(i == num.size())
        return;
    int newSum = sum + num[i];
    cal(num,res,sum,i+1,1);
    cal(num,res,newSum,i+1,0);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> res;
    cal(num, res, 0, 0, 0);
    sort(res.begin(),res.end());
    return res;
}
