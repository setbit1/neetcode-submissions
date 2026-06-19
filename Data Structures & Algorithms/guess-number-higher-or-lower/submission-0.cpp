/** 
 * Forward declaration of guess API.
 * @param  num   your guess
 * @return 	     -1 if num is higher than the picked number
 *			      1 if num is lower than the picked number
 *               otherwise return 0
 * int guess(int num);
 */

class Solution {
public:
    int guessNumber(int n) {
        int l = 0, r = n, num = 0, g = 2;
        while(l <= r)
        {
            num = l + (r-l)/2;
            g = guess(num);

            if(0 == g)
                return num;
            if(1 == g)
                l = num+1;
            else if(-1 == g)
                r = num-1;
        }
        return -1;
    }
};