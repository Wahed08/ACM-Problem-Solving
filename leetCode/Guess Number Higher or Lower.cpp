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
        
        ios_base::sync_with_stdio(false);
        cin.tie(0), cout.tie(0);
        
        int low = 1, high = INT_MAX;
        while(low <= high){
            int mid = low + (high-low)/2;
            if(guess(mid) == 0)
                return mid;
            if(guess(mid) == -1)
                high = mid - 1;
            else
                low = mid + 1;
        }
        return 0;
    }
};
