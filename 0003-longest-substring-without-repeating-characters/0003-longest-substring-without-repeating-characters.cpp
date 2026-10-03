class Solution {
public:
    int lengthOfLongestSubstring(string s) {
    int maxlength=0;
    int end=0;
    string temp;
    while(end<s.size()){
       auto it=temp.find(s[end]);
       if(it<temp.size()){
        maxlength=max((int)temp.size(),maxlength);
        temp.erase(temp.begin(),temp.begin()+it+1);
       }
   else{
    temp+=s[end];
    end++;
   }      
    }
     maxlength=max((int)temp.size(),maxlength);
    return maxlength;
    }
};