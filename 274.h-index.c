/*
 * @lc app=leetcode id=274 lang=c
 *
 * [274] H-Index
 */

// @lc code=start
bool check(int* citations, int citationsSize, int x){
    int cnt = 0;
    for (int i=0;i<citationsSize;i++){
        cnt += (citations[i]>=x);
    }
    return (cnt>=x);
}
int hIndex(int* citations, int citationsSize) {
    int l = 1, r = citationsSize, res = 0;
    while(l<=r){
        int m =(l+r)/2;
        if (check(citations, citationsSize,m)){
            res = m;
            l = m+1;
        }else{
            r = m-1;
        }
    }
    return res;
}
// @lc code=end

