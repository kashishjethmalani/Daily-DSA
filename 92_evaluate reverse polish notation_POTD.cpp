


class Solution {
public:
    int evalRPN(vector<string> &v)
    {
        stack<int> st;

        for (int i = 0; i < v.size(); i++)
        {
            if (v[i] == "+" or v[i] == "-" or v[i] == "*" or v[i] == "/")
            {
                int a=st.top();
                st.pop();
                int b = st.top();
                st.pop();
                cout<<a<<" "<<b<<endl;
                if(v[i] == "+") st.push(a+b);
                else if(v[i] == "-") st.push(b-a);
                else if(v[i] == "*") st.push(a*b);
                else if(v[i] == "/") st.push(b/a);
            }
            else
            {

                int x = stoi(v[i]);
                st.push(x);
            }
        }
        int ans=st.top();
        return ans;
    }
};
