class Solution {
public:
    void reverseString(vector<char>& s) {
        //int i = 0;
        s = reverseString(0, s.size()-1, s);
       }

    vector<char> reverseString(int first, int last, vector<char> &string)
    {
        if(first>=last)
            return string;
        swap(string[first], string[last]);
        return reverseString(first+1, last-1, string);
    }
};