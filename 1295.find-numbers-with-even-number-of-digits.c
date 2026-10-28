/*
 * @lc app=leetcode id=1295 lang=c
 *
 * [1295] Find Numbers with Even Number of Digits
 */

// @lc code=start
bool check(int *x){
    int cnt = 0;
    while(*x>0){
        *x/=10;
        cnt ++;
    }
    return (cnt%2==0);
}

int findNumbers(int* nums, int numsSize) {
    int res = 0;
    for (int i=0;i<numsSize;i++){
        res +=check(&nums[i]);
    }
    return res;
}
// @lc code=end

