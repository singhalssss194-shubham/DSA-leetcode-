class Solution {
public:
    string simplifyPath(string path) {
    stack<string>st;
      stringstream ss(path);
      string tkn;
      while(getline(ss,tkn,'/')){
      if(tkn==""||tkn==".")continue;
      if(tkn!=".."){
        st.push(tkn);
      }
      else if(!st.empty()){
        st.pop();
      }
      }
      string ans;
      if(st.empty())return "/";
      while(!st.empty()){
        ans="/"+st.top()+ans;
        st.pop();
      }
      return ans;
    }
};