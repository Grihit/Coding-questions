void cal(vector<int> &num, vector<int> &res, int sum, int i){       
    if(i == num.size()){
        res.push_back(sum);
        return;
    }
    int newSum = sum + num[i];
    cal(num,res,sum,i+1);
    cal(num,res,newSum,i+1);
}

vector<int> subsetSum(vector<int> &num)
{
    vector<int> res;
    cal(num, res, 0, 0);
    sort(res.begin(),res.end());
    return res;
}
