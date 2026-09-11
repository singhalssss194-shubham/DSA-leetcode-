class Solution {
public:
    bool hasGroupsSizeX(vector<int>& deck) {
        unordered_map<int, int> mp;
        for (int i = 0; i < deck.size(); i++) {
            mp[deck[i]]++;
        }
        int x = mp[deck[0]];
        for (auto it : mp) {
            x = gcd(x, it.second);
        }
        if (x < 2) {
            return false;
        }
        return true;
    }
};