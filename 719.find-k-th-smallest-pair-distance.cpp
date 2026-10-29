/*
 * @lc app=leetcode id=719 lang=cpp
 *
 * [719] Find K-th Smallest Pair Distance
 */

// @lc code=start
class Solution {
public:
    #define N 2000005
    #define dbit i&-i
    int bit[N+5];
    void up(int i, int val){
        while(i<=N){
            bit[i]+=val;
            i +=dbit;
        }
    }
    int get(int i){
        int sum=0;
        while(i>0){
            sum+=bit[i];
            i-=dbit;
        }
        return sum;
    }

    int getrange(int l, int r){
        l-=1; l = max(l,0);
        return get(r)-get(l);
    }

    bool check(vector<int> &nums, int k, int x){
        int res = 0; memset(bit,0,sizeof(bit));
        for (int i=0;i<nums.size();i++){
            res +=getrange(nums[i]-x,nums[i]+x);
            up(nums[i],1);
        }
        return res>=k;
    }
    int smallestDistancePair(vector<int>& nums, int k) {
        for (int i=0;i<nums.size();i++)nums[i] = nums[i]+1;
        int l = 0,r = 1e6, res = -1;
        while(l<=r){
            int m = (l+r)/2;
            if (check(nums,k,m)){
                res = m;
                r = m-1;
            }else l = m+1;
        }
        return res;
    }
};
// @lc code=end

