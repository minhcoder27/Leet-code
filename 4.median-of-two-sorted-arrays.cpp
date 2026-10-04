/*
 * @lc app=leetcode id=4 lang=cpp
 *
 * [4] Median of Two Sorted Arrays
 */

// @lc code=start
class Solution {
public:
    int n, m;
    int solve(vector<int>& nums1, vector<int>& nums2, int t){
        n = nums1.size()-1;
        m = nums2.size()-1;
        int l = 0, r = n;
        double res = 1e9;
        while(l<=r){
            int mid = (l+r)/2;
            int x = upper_bound(nums2.begin(),nums2.end(),nums1[mid])-nums2.begin()-1;
            if (mid+x+1>=(n+m+2)/2-t){
                //cout <<nums1[mid]<<" "<<mid<<" "<<x<<" <> "<<mid+x+2<<" "<<(n+m+2)/2<<endl;
                res = nums1[mid];
                r = mid-1;
            }else{
                l = mid +1;
            }
        }

        return res;
    }
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {
        double res = 1e9;
        if ((nums1.size()+nums2.size())%2==1){
            int sol1 = solve(nums1,nums2,0);
            int sol2 = solve(nums2,nums1,0);

            res = min(sol1,sol2);
        }else{
            int sol1 = solve(nums1,nums2,1);
            int sol2 = solve(nums2,nums1,0);
            int sol22 = solve(nums2,nums1,1);

            res = min(res, (double)(sol1+sol2)/2);
            res = min(res, (double)(sol2+sol22)/2);

            sol1 = solve(nums2,nums1,1);
            sol2 = solve(nums1,nums2,0);
            sol22 = solve(nums1,nums2,1);

            res = min(res, (double)(sol1+sol2)/2);
            res = min(res, (double)(sol2+sol22)/2);

        }

        return res;
    }
};
// @lc code=end

