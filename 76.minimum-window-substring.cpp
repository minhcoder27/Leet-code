/*
 * @lc app=leetcode id=76 lang=cpp
 *
 * [76] Minimum Window Substring
 */

// @lc code=start
class Solution {
public:
    int cnt[256][2], cur =0, rel = 0;
    string minWindow(string s, string t) {
        memset(cnt,0,sizeof(cnt));
        for (char c: t){
            if (cnt[c][0]==0) rel++;
            cnt[c][0]++;
        }

        int j = 0;
        int res =1e6;
        pair<int,int> res_index = {0,0};
        for (int i=0;i<s.size();i++){
            if (++cnt[s[i]][1]== cnt[s[i]][0]) cur++;
            while(cur==rel){
                if (i-j+1<res){
                    res = i-j+1;
                    res_index = {j,i};
                }
                if (j>=i) break;
                if (--cnt[s[j]][1] < cnt[s[j]][0]){
                    cur--;
                }
                j++;
            }
        }

        string res_s ="";
        if (res !=1e6){
            for (int i=res_index.first;i<=res_index.second;i++){
                res_s.push_back(s[i]);
            }
        }
        return res_s;
    }
};
// @lc code=end

