/*
 * @lc app=leetcode id=7 lang=cpp
 *
 * [7] Reverse Integer
 */

// @lc code=start
class Solution {
public:
    int reverse(long long x) {
        long long res = 0;
        long long tmp = (x<0?-1:1); x = abs(x);
        while(abs(tmp*10)<=x) tmp = tmp*10;
        while(x>0){
            int a = x%10;
            res +=1ll*a*tmp;
            tmp/=10;
            x/=10;
        }
        

        if (res<INT_MIN || res>INT_MAX) return 0;
        return res;
    }
};
// @lc code=end

