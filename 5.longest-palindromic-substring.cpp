/*
 * @lc app=leetcode id=5 lang=cpp
 *
 * [5] Longest Palindromic Substring
 */

// @lc code=start
class Solution {
public:
    string longestPalindrome(string s) {
        int dp[1005][1005];
        memset(dp,0,sizeof(dp));
        int n = s.size();
        s = " "+s;

        int res = 1;
        for (int i=1;i<=n;i++) dp[i][i] = 1;
        for (int i=1;i<n;i++) if (s[i]==s[i+1]) dp[i][i+1] = 2, res=2;

        
        for (int len = 3; len<=n;len++){
            for (int i=1;i<=n-len+1;i++){
                int j = i+len-1;
                if (s[i] == s[j] && dp[i+1][j-1]) dp[i][j] = dp[i+1][j-1]+2;
                res = max(res,dp[i][j]);
            }
        }

        for (int i=1;i<=n;i++){
            for (int j = i;j<=n;j++){
                if (dp[i][j]==res){
                    string ans ="";
                    for (int x = i;x<=j;x++) ans.push_back(s[x]);
                    return ans;
                }
            }
        }


    }
};
// @lc code=end

