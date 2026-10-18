class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
     multiset<int>st;
     for(int i=0;i<m;i++){
        st.insert(nums1[i]);
     }
     for(int i=0;i<n;i++){
        st.insert(nums2[i]);
     }
     nums1.clear();
     for(int i:st){
        nums1.push_back(i);
     }
     
    }
};