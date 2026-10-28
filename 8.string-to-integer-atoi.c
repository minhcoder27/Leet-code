/*
 * @lc app=leetcode id=8 lang=c
 *
 * [8] String to Integer (atoi)
 */

// @lc code=start
int myAtoi(char* s) {
    int n = strlen(s);
    int cur = 0;
    int res = 0;
    while(s[cur]==' ' && cur<n) cur++;
    int sign = 1; 
    switch(s[cur]){
        case '-':
            sign =-1;
            cur++;
            break;
        case '+':
            cur++;
    }

    long long lim = 1;
    for (int i=1;i<=31;i++) lim*=2;
    while(s[cur]=='0' && cur<n) cur++;
    while(s[cur]>='0' && s[cur]<='9' && cur<n){
        long long val = 1ll*res*10+sign*(s[cur]-'0');
        printf("%ld %ld \n",val,lim);
        if (val<0 && val<-1*lim) return -1*lim;
        if (val>0 && val>lim-1) return lim-1;
        res = res*10+sign*(s[cur]-'0');
        cur++;
    }
    return res;
}
// @lc code=end

