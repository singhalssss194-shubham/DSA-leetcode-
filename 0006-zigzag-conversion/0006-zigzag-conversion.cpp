class Solution {
public:
    string convert(string s, int numRows) {
        vector<string> ans(numRows);
        int k = 0; 
        while (k < s.size()) {
            for (int i = 0; i < ans.size() && k < s.size(); i++) {
                ans[i] += s[k];
                k++;
            }
            for (int i = numRows - 2; i > 0 && k < s.size(); i--) {
                ans[i] += s[k];
                k++;
            }
        }
        string as;
        for (string s : ans) {
            as += s;
        }
        return as;
    }
};