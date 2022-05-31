class Solution {
public:
    bool hasAllCodes(string s,int k) {
        int count = 1 << k;
        set<string> hash;
        
        for(int i=0;i+k-1<s.length();++i){
            string a = s.substr(i,k);
            if(hash.find(a) == hash.end()){
                //cout<<count<<" "<<a<<" ";
                count--;
                hash.insert(a);
                if(count == 0)
                    return true;
            }
        }
        
        return false;
    }
};
