/*
 * @lc app=leetcode id=88 lang=c
 *
 * [88] Merge Sorted Array
 */

// @lc code=start
void merge(int* nums1, int nums1Size, int m, int* nums2, int nums2Size, int n) {
    int cur = nums1Size-1;
    int cur1 = m-1;
    int cur2 = n-1;
    while(cur>=0){
        if (cur1>=0 && cur2>=0){
            if (nums1[cur1]>nums2[cur2]){
                nums1[cur] = nums1[cur1];
                cur1--;
            }else{
                nums1[cur] = nums2[cur2];
                cur2--;
            }
        }else{
            if (cur1>=0){
                nums1[cur] = nums1[cur1];
                cur1--;
            }else{
                nums1[cur] = nums2[cur2];
                cur2--;
            }
        }
        cur--;
    }
}
// @lc code=end

