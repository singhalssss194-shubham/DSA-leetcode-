class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    vector<int>result(nums.size());
    int l=0,i=nums.size()-1,r=nums.size()-1;
    while(l<=r){
        int lsq=nums[l]*nums[l];
        int rsq=nums[r]*nums[r];
        if(lsq<=rsq){
           result[i]=rsq;
           r--;
           i--;
        } 
        else{
            result[i]=lsq;
            l++;
            i--;
        }
    }
    return result;
    }
};