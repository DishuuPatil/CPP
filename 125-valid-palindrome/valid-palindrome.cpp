class Solution {
public:
    bool isPalindrome(string s) {
        return isPalindrom(0,s.size()-1, s);
    }

    bool isPalindrom(int first, int last, string& str)
    {
        if(first>=last)
            return true;
        if(isalnum(str[first]) && isalnum(str[last]))
            if(tolower(str[first]) != tolower(str[last]))return false;
            else{
                return isPalindrom(first+1, last-1, str);
            }
        else{
            if(!isalnum(str[first]))
                first++;
            if(!isalnum(str[last]))
                last--;
            return isPalindrom(first, last, str);
        }
        
    }
};