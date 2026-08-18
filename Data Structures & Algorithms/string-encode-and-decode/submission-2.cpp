class Solution {
public:

    string encode(vector<string>& strs) {
        string str = "";
        for(const auto& s : strs){
            int n = s.length();
            str += (std::to_string(n) + '#' + s);
        }
        cout << str;
        return str; 
    }

    vector<string> decode(string s) {
        vector<string> res;
        int ch = 0;
        int i = 0;
        string st = "";
        string num = "";
        while(i < s.length()){
            st = "";
            num = "";
            int k = 0;
            while(s[i+k] !='#'){
                num += s[i+(k++)];
            }
            ch = stoi(num);
            for(int j=0;j<ch;j++){
                st += s[i+k+1+j];
            }
            res.push_back(st);
            i += ch + k + 1;
            ch = 0;
        }
        return res;
    }
};
