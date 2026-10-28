/*
 * @lc app=leetcode id=1523 lang=c
 *
 * [1523] Count Odd Numbers in an Interval Range
 */

// @lc code=start


int countOdds(int low, int high){
    if (low%2==0) low++;
    if (high%2==0) high--;
    return (high-low)/2+1;
}
// @lc code=end

