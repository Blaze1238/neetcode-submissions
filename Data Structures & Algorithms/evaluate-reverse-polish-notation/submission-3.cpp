class Solution {
public:

    int Evaluate(stack<int>& st, string ch){
        int n1 = st.top();
        st.pop();
        int n2 = st.top();
        st.pop();
        int res;
        switch(ch[0]){
            case '+':
                res = n2 + n1;
                break;
            case '-':
                res =  n2 - n1;
                break;
            case '*':
                res = n2 * n1;
                break;
            case '/':
                res =  n2 / n1; 
                break;
        }
        return res;
    }

    int evalRPN(vector<string>& tokens) {
        int result = 0;
        stack<int> st;
        for(const auto& token : tokens){
            if(token == "+" || token == "-" || token == "*" || token == "/"){
                st.push(Evaluate(st,token));
            }
            else{
                st.push(stoi(token));
            }
        }
        return st.top();
    }
};
