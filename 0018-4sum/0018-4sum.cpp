class Solution {
public:
    vector<vector<int>> fourSum(vector<int>& nums, int target) {
        sort(nums.begin(), nums.end());
        int n = nums.size();
        set<vector<int>> st;
        for (int i = 0; i < n; i++) {
            if(i>0 && nums[i]== nums[i-1])continue;
            for (int j = i + 1; j < n; j++) {
                 if(j>i+1 && nums[j]==nums[j-1])continue;
                int k = j + 1, l = n - 1;
                while (k <l) {
                    if(l<n-1 && nums[l]==nums[l+1]){
                        l--;
                        continue;
                    }
                    if(k>j+1 && nums[k]==nums[k-1]){
                        k++;
                        continue;
                    }
                    long long  sum = nums[i];
                    sum+=  nums[j] ;
                    sum+= nums[k];
                    sum+=nums[l];
                    if (sum == target) {
                        vector<int> vec = {nums[i], nums[j], nums[k], nums[l]};
                        st.insert(vec);
                        k++;l--;
                    } else if (sum > target) {
                        l--;
                    } else {
                        k++;
                    }
                }
            }
        }
        vector<vector<int>> ans(st.begin(), st.end());
        return ans;
    }
};