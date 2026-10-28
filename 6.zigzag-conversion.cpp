/*
 * @lc app=leetcode id=6 lang=cpp
 *
 * [6] Zigzag Conversion
 */

// @lc code=start
class Solution {
public:
    string convert(string s, int numRows) {
        vector<char> a[numRows];
        
        if (numRows==1){
            return s;
        }
        int i = 0;
        bool take = 1;
        while(i<s.size()){
            if (take){
                for (int j=0;j<numRows;j++){
                    if (i+j>=s.size()) break;
                    a[j].push_back(s[i+j]);
                }
                i+=numRows;
                take = 0;
            }else{
                for (int j=0;j<numRows-2;j++){
                    if (i+j>=s.size()) break;
                    a[numRows-2-j].push_back(s[i+j]);
                }
                i+=numRows-2;
                take = 1;
            }
        }
        string res ="";
        for (int i=0;i<numRows;i++){
            for (char c: a[i]) res.push_back(c);
        }
        return res;
    }
};
// @lc code=end

