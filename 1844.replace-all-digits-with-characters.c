/*
 * @lc app=leetcode id=1844 lang=c
 *
 * [1844] Replace All Digits with Characters
 */

// @lc code=start
char* replaceDigits(char* s) {
    int n = strlen(s);
    for (int i=0;i<n;i++){
        if (s[i]>='0' && s[i]<='9'){
            s[i] = s[i-1]+(s[i]-'0');
        }
    }
    return s;
}
// @lc code=end

