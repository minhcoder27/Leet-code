/*
 * @lc app=leetcode id=1281 lang=c
 *
 * [1281] Subtract the Product and Sum of Digits of an Integer
 */

// @lc code=start
int subtractProductAndSum(int n) {
    int product = 1;
    int sum = 0;
    while(n>0){
        product *=n%10;
        sum += n%10;
        n/=10;
    }

    return product -sum;
}
// @lc code=end

