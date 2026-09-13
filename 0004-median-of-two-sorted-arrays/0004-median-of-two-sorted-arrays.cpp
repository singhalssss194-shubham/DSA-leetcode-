class Solution {
public:
    double findMedianSortedArrays(vector<int>& nums1, vector<int>& nums2) {

        for(int x : nums2) {

            int st = 0;
            int end = nums1.size();
            int mid;

            // find insertion index
            while(st < end) {
                mid = st + (end - st) / 2;

                if(nums1[mid] < x)
                    st = mid + 1;
                else
                    end = mid;
            }

            nums1.insert(nums1.begin() + end, x);
        }

        int n = nums1.size();

        if(n % 2)
            return nums1[n/2];

        return (nums1[n/2] + nums1[n/2 - 1]) / 2.0;
    }
};