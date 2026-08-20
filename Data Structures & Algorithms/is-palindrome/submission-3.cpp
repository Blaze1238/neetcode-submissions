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
            while(!checkIfAlphanumeric(s[i]) && i < s.length()-1 )
                i++;
            while(!checkIfAlphanumeric(s[j]) && j > 0)
                j--;
            if(i<j){
                if(convertToLower(s[i]) == convertToLower(s[j])){
                    i++;
                    j--;
                }
                else{
                    return false;
                }
            }
            else break;
        }

        return true;
    }
    
};
