class Solution {
public:
    vector<vector<int>> mergeSimilarItems(vector<vector<int>>& items1,
                                          vector<vector<int>>& items2) {
        map<int, int> mp;
        int n1 = items1.size();
        int n2 = items2.size();
        for (int i = 0; i < n1; i++) {
            mp[items1[i][0]] = items1[i][1];
        }
        for (int i = 0; i < n2; i++) {
            auto it = mp.find(items2[i][0]);
            if (it != mp.end()) {
                mp[items2[i][0]] += items2[i][1];
            } else {
                mp[items2[i][0]] = items2[i][1];
            }
        }
        vector<vector<int>> ans;
        for (auto it : mp) {
            vector<int> pair;
            pair.push_back(it.first);
            pair.push_back(it.second);
            ans.push_back(pair);
        }
        return ans;
    }
};