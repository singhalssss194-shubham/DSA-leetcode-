class Solution {
public:
    vector<int> sortedSquares(vector<int>& nums) {
    multiset<int>st;
     for(int i=0;i<nums.size();i++){
        st.insert(nums[i]*nums[i]);
     }  
     nums.clear();
    for(auto it :st){
        nums.push_back(it);
    } 
    return nums;
    }
};