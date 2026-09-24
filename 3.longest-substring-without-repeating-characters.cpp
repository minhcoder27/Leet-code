/*
 * @lc app=leetcode id=3 lang=cpp
 *
 * [3] Longest Substring Without Repeating Characters
 */

// @lc code=start
class Solution {
public:
    int lengthOfLongestSubstring(string s) {
        int n = s.size();
        bool mark[265];
        memset(mark,0,sizeof(mark));
        int res = 0;
        int j = 0;
        for (int i=0;i<n;i++){
            while(mark[s[i]]) mark[s[j++]] = 0;
            mark[s[i]] = 1;
            res = max(res, i-j+1);
            
        }


        return res;
    }
};
// @lc code=end

