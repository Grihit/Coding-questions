class Solution {
public:
    int hammingWeight(uint32_t n) {
        int count = 0;
        //cout<<n;
        while(n>0){
            if(n%2 == 1)
                count++;
            n = n/2;
        }
        return count;
    }
};

// class Solution {
// public:
//     int hammingWeight(uint32_t n) {
//         int ans = 0;
//         while(n > 0)
//         {
//             n = n & (n-1);
//             ans++;;
//         }
//         return ans;
//     }
// };
