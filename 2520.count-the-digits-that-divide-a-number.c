/*
 * @lc app=leetcode id=2520 lang=c
 *
 * [2520] Count the Digits That Divide a Number
 */

// @lc code=start
int countDigits(int num) {
    int cnt = 0;
    int x[10] = {0};
    int n = num;
    while(num>0){
        if (n%(num%10)==0) cnt++;
        num/=10;
    }
    return cnt;
}
// @lc code=end

