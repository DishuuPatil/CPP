class Solution {
public:
    void reverseString(vector<char>& s) {
        //using recursion;
        reverseString(0, s.size()-1, s);
       }

    void reverseString(int first, int last, vector<char> &string)
    {
        if(first>=last)
            return;
        swap(string[first], string[last]);
        reverseString(first+1, last-1, string);
    }
};