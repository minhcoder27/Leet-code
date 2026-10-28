/*
 * @lc app=leetcode id=27 lang=c
 *
 * [27] Remove Element
 */

// @lc code=start
int removeElement(int* nums, int numsSize, int val) {
    if (numsSize==0) return 0;
    int res = numsSize;
    int cur = numsSize-1;
    while(nums[cur]==val && cur>0)cur--;
    for (int i=numsSize-1;i>=0;i--){
        if (nums[i]==val){
            res--;
            if (cur>i){
                int tmp = nums[i];
                nums[i] = nums[cur];
                nums[cur] = tmp;
                while(nums[cur]==val && cur>0) cur--;
            }
        }

    }
    return res;
}
// @lc code=end

