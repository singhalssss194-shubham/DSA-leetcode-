class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
      for(int i=00;i<nums.size();i++){
        nums[i]=nums[i]*nums[i];
      }
      sort(nums.begin(),nums.end());
      return nums;
    }
};