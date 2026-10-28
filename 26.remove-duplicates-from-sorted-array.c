/*
 * @lc app=leetcode id=26 lang=c
 *
 * [26] Remove Duplicates from Sorted Array
 */

// @lc code=start
int removeDuplicates(int* nums, int numsSize) {
    if (numsSize==0) return 0;
    int res = numsSize;
    int val = -12345;
    int cnt[201] = {0};
    int cur = numsSize-1;
    for (int i=0;i<numsSize;i++){
        cnt[nums[i]+100]++;
        if (cnt[nums[i]+100]>1) nums[i] = val;
    }

    for (int i=0;i<res;i++){
        if (nums[i]==val){
            for (int j = i+1;j<res;j++){
                nums[j-1] = nums[j];
            }
            res--;
            i--;
        }
    }
    return res;
}
// @lc code=end

