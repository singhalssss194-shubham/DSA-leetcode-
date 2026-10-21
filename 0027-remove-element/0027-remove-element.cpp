class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        if (nums.size() == 0) {
            return 0;
        }

        int left = 0, right = 0;
        while (right < nums.size()) {
            if (nums[right] != val) {
                swap(nums[left], nums[right]);
                left++;
            }
            right++;
        }
        int cnt = count(nums.begin(), nums.end(), val);
        int k = nums.size() - cnt;
        if (k == 0) {
            return 0;
        }
        sort(nums.begin(), nums.begin() + k - 1);
        return k;
    }
};