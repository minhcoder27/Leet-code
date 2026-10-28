/*
 * @lc app=leetcode id=410 lang=cpp
 *
 * [410] Split Array Largest Sum
 */

// @lc code=start
class Solution {
public:
    bool check(vector<int> &nums, int x, int k){
        int sum = 0;
        int cnt = 0;
        for (int i=0;i<nums.size();i++){
            if (nums[i]>x) return 0;
            if (sum +nums[i]>x){
                sum = nums[i];
                cnt++;
            }else sum +=nums[i];
        }
        cnt++;
        return cnt<=k;
    }
    int splitArray(vector<int>& nums, int k) {
        int l = 0, r = 1e9, res = -1;
        while(l<=r){
            int m = (l+r)/2;
            if (check(nums, m, k)){
                res = m;
                r = m-1;
            }else l = m+1;
        }
        return res;
    }
};
// @lc code=end

