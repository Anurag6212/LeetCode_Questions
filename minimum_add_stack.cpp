class Solution {
public:
        stack<char>st;
        int count=0;
    int minAddToMakeValid(string s) {
        for(int i=0;i<s.size();i++)
        {
                if(s[i]=='(')
                {
                        st.push(s[i]);
                }
                else if(s[i]==')')
                {
                        if(!st.empty() and st.top()=='(')
                        {
                                st.pop();
                        }
                        else{
                                st.push(s[i]);
                        }
                }
        }
            while(!st.empty())
            {
                    count++;
                    st.pop();
            }
            return count;
    }
};
