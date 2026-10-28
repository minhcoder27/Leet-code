/*
 * @lc app=leetcode id=9 lang=c
 *
 * [9] Palindrome Number
 */

// @lc code=start
int a[20] = {0};
bool isPalindrome(int x) {
    if (x<0) return false;

    int n = 0;
    start: if (x>0){
        a[++n] = x%10;
        x/=10;
        goto start;
    }

    for (int i=1;i<=n/2;i++){
        if (a[i] != a[n-i+1]) return false;
    }
    return true;
}
// @lc code=end

