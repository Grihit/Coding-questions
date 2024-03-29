/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is lower than the guess number
 *			      1 if num is higher than the guess number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 1;
        int h = n;
        while(h>=l)
        {
            int mid = l + (h - l)/2;
            int res = guess(mid);
            if(res == 0)
                return mid;
            else if(res == 1)
                l = mid + 1;
            else
                h = mid - 1;
        }
        return n;
    }
};
