class Solution {
public:
    string fun(stack<char>&st){
        string s = "";
        while(!st.empty()){
            s += st.top();
            st.pop();
        }
        reverse(s.begin(),s.end());
        return s;
    }
    bool backspaceCompare(string s, string t) {
        stack<char>st;
        for(int i = 0; i<s.size(); i++){
            if(s[i] != '#')
                st.push(s[i]);
            else{
                if(!st.empty())
                    st.pop();
            }
        }
        s = fun(st);
        for(int i = 0; i<t.size(); i++){
            if(t[i] != '#')
                st.push(t[i]);
            else{
                if(!st.empty())
                    st.pop();
            }
        }
        t = fun(st);
        cout << s << " " << t << endl;
        return s == t;
    }
};