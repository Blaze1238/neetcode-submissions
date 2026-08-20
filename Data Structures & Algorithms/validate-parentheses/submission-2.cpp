class Solution {
public:

    bool matches(char c1, char c2){
        if((c1 == '(' && c2 == ')') || (c1 == '{' && c2 == '}') || (c1 == '[' && c2 == ']')) return true;
        return false;
    }

    bool isValid(string s) {
        int i = 0;
        stack<char> st;
        st.push('#');
        while(i < s.length()){
            if(s[i] == '(' || s[i] == '{' || s[i] == '[') st.push(s[i]);
            else{
                if(matches(st.top(),s[i])) st.pop();
                else{
                    return false;
                }
            }
            i++;
        }
        if(st.top() == '#') return true;
        return false;
    }
};
