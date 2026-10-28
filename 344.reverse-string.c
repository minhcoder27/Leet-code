/*
 * @lc app=leetcode id=344 lang=c
 *
 * [344] Reverse String
 */

// @lc code=start

void swap(char *i, char *j){
    char tmp = *i;
    *i = *j;
    *j = tmp;
}
void reverseString(char* s, int sSize) {
    char *c;
    for (int i =0;i<sSize/2;i++){
        swap(&s[i],&s[sSize-1-i]);
    }

}
// @lc code=end

