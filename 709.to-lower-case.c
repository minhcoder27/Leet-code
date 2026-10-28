/*
 * @lc app=leetcode id=709 lang=c
 *
 * [709] To Lower Case
 */

// @lc code=start
char* toLowerCase(char* s) {
    int n = strlen(s);
    for (int i=0;i<n;i++){
        if (s[i]>='A' && s[i]<='Z'){
            s[i] = s[i]+32;
        }
    }
    return s;
}
// @lc code=end

