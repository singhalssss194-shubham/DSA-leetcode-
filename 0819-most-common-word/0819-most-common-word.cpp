class Solution {
public:
    string mostCommonWord(string paragraph, vector<string>& banned) {
        map<string,int>mp;
        for(int i = 0; i < paragraph.size(); i++) {
            paragraph[i] = tolower(paragraph[i]);

            if(!isalpha(paragraph[i])) {
                paragraph[i] = ' ';
            }
        }
       stringstream ss(paragraph);
          string s;
          while(ss>>s){
            auto it=find(banned.begin(),banned.end(),s);
            if(it==banned.end()){
           mp[s]++;
            }
          }
      string ans;
      int count=0;
      for(auto it:mp){
        if(it.second>count){
            ans=it.first;
            count=it.second;
        }
      }
      return ans;   
    }
};