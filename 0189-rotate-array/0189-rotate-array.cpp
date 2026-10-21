class Solution {
public:
    void rotate(vector<int>& nums, int k) {
        if(nums.size()==1){return ;}
       k=k%nums.size();
        deque<int> dq;
        for (int i = 0; i < nums.size() - k; i++) {
            dq.push_back(nums[i]);
        }
        for (int i = nums.size() - 1; i >= nums.size() - k; i--) {
            dq.push_front(nums[i]);
        }
        nums.clear();
        for (int i : dq) {
            nums.push_back(i);
        }
        return;
    }
};