class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int num:nums) {
            int nod = to_string(num).length();
            if (nod % 2 == 0 && nod != 0) {
                count++;
            }
        }
        return count;
    }
};