class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count = 0;
        for (int i = 0; i < nums.size(); i++) {
            int nod = 0;
            while (nums[i] > 0) {
                nod++;
                nums[i] /= 10;
            }
            if (nod % 2 == 0 && nod != 0) {
                count++;
            }
        }
        return count;
    }
};