class Solution {
public:
    int threeSumMulti(vector<int>& arr, int target) {
        long long count = 0;
        map<int, int> mp;
        for (int i = 0; i < arr.size(); i++) {
            mp[arr[i]]++;
        }
        sort(arr.begin(), arr.end());
        int n = arr.size();
        for (int i = 0; i < n; i++) {
            if (i > 0 && arr[i] == arr[i - 1])
                continue;
            int st = i + 1, end = n - 1;
            while (st < end) {
                if (st > i + 1 && arr[st] == arr[st - 1]) {
                    st++;
                    continue;
                }
                if (end < n - 1 && arr[end] == arr[end + 1]) {
                    end--;
                    continue;
                }
                long long sum = arr[i];
                sum += arr[st];
                sum += arr[end];
                if (sum == target) {
                
                    if (arr[i] == arr[st] && arr[st] == arr[end]) {

                        long long x = mp[arr[i]];

                        count += x * (x - 1) * (x - 2) / 6;

                        break;
                    }

                    else if (arr[i] == arr[st]) {

                        long long x = mp[arr[i]];
                        long long y = mp[arr[end]];

                        count += x * (x - 1) / 2 * y;

                        st++;
                    }

                    else if (arr[st] == arr[end]) {

                        long long x = mp[arr[i]];
                        long long y = mp[arr[st]];

                        count += x * y * (y - 1) / 2;

                        end--;
                    }

                    else {

                        count += (long long)mp[arr[i]]
                               * mp[arr[st]]
                               * mp[arr[end]];

                        st++;
                        end--;
                    }
                }
                else if( sum < target){
                    st++;
                }
                else{
                    end--;
                }
            }
        }
       
        return count % 1000000007;
    }
};