/*
 * @lc app=leetcode id=258 lang=c
 *
 * [258] Add Digits
 */

// @lc code=start
int addDigits(int n) {
    start: if (n>9){
        int sum = 0;
        while(n>0){
            sum+=n%10;
            n/=10;
        }
        n = sum;
        goto start;
    }
    return n;
}
// @lc code=end

