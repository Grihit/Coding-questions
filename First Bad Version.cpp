// The API isBadVersion is defined for you.
// bool isBadVersion(int version);

class Solution {
public:
    int firstBadVersion(int n) {
        int low = 1;
        int high = n;
        int mid = 1;
        int flag = 0;
        while(high>=low)
        {
            mid = low + (high - low)/2;
            if(!isBadVersion(mid))
            {
                low = mid + 1;
                flag = 0;
            }
            else
            {
                high = mid - 1;
                flag = 1;
            }
        }
        if(!isBadVersion(mid))
            return mid + 1;
        return mid;
    }
};
