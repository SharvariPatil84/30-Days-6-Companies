class Solution {
public:
    int evalRPN(vector<string>& tokens) {
        int n;
        n=tokens.size();
        stack<long long int>st;
        for(int i=0;i<n;i++)
        {
            if(tokens[i]=="+"||tokens[i]=="*"||tokens[i]=="/"||tokens[i]=="-")
            {
                long long a=st.top();
                st.pop();
                
                long long b=st.top();
                st.pop();
                if(tokens[i]=="+")
                {
                    st.push(a+b);
                }
                else  if(tokens[i]=="*")
                {
                    st.push(a*b);
                }
                else  if(tokens[i]=="-")
                {
                    st.push(b-a);
                }
                else
                {
                  
                    st.push(b/a);
                }
            }
            else
            {
              
                st.push(stoi(tokens[i]));
            }
        }
        return st.top();
    }
};
