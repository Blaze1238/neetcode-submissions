class Solution {
public:

    char convertToLower(char c){
        if(c >= 'A' && c <= 'Z')
            return c + 32;
        else 
            return c;
    }

    bool checkIfAlphanumeric(char c){
        if((c >= '0' && c <= '9') || (c >= 'a' && c <= 'z') || (c >= 'A' && c <= 'Z')) return true;
        return false;
    }

    bool isPalindrome(string s) {
        int i = 0;
        int j = s.length() - 1;

        while(i<j){
            cout<<i<<" , " <<j<<endl;
            if(!checkIfAlphanumeric(s[i]))
                i++;
            else if(!checkIfAlphanumeric(s[j]))
                j--;
            else{
                if(convertToLower(s[i]) == convertToLower(s[j])){
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
        }

        return true;
    }
    
};
