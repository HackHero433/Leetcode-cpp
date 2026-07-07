class Solution {
public:
    bool helper(string &s, int low, int high) {
        while (low < high && !isalnum(s[low])) low++;
        while (low < high && !isalnum(s[high])) high--;

        if (low >= high) return true;

        if (tolower(s[low]) != tolower(s[high]))
            return false;

        return helper(s, low + 1, high - 1);
    }

    bool isPalindrome(string s) {
        return helper(s, 0, s.size() - 1);
    }
};