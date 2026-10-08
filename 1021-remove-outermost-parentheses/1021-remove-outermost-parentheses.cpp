class Solution {
public:
    string removeOuterParentheses(string s) {
      string ans;
      int stt=0,end=0;
      stack<char>st;
      while(end<s.size()){
        if(s[end]=='('){
            st.push('(');
            end++;
        }
        else if(s[end]==')'){
            st.pop();
            if(st.size()==0){
                s.erase(s.begin()+stt);
                s.erase(s.begin()+end-1);
                end=end-1;
                stt=end;
            }
            else{end++;}
        }
      }
      return s;
    }
};