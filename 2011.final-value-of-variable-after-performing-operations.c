/*
 * @lc app=leetcode id=2011 lang=c
 *
 * [2011] Final Value of Variable After Performing Operations
 */

// @lc code=start
int cal(char* X){
    switch (X[1]){
        case '+': return 1;
        case '-': return -1;
        default: return 0;
    }
    return 0;
}
int finalValueAfterOperations(char** operations, int operationsSize) {
    int res = 0;
    for (int i=0;i<operationsSize;i++){
        res +=cal(operations[i]);
    }
    return res;
}
// @lc code=end

