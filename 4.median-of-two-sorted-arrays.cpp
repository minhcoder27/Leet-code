/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    int n, m;
    pair<int,int> solve(vector<int>& nums1, vector<int>& nums2){
        int l = 0, r = n;
        pair<int,int> res;
        res = {-1,-1};
        while(l<=r){
            int mid = (l+r)/2;
            int x = upper_bound(nums2.begin)(),nums2.end(),nums1[mid])-nums2.begin()-1;
            if (mid+x+2>=(n+m)/2){
                res = {nums1[mid],mid+x+2
            }
        }
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        
    }
};
// @lc code=end

