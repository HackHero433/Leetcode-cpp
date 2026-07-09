class Solution {
public:
    unordered_map<char, string> f = {
        {'2',"abc"},
        {'3',"def"},
        {'4',"ghi"},
        {'5',"jkl"},
        {'6',"mno"},
        {'7',"pqrs"},
        {'8',"tuv"},
        {'9',"wxyz"}
    };

    void helper(string &digits, int n, int idx,
                string &temp, vector<string> &res) {

        if (idx == n) {
            res.push_back(temp); //base case
            return;
        }

        string choice = f[digits[idx]];

        for (int j = 0; j < choice.size(); j++) {

            temp.push_back(choice[j]);

            helper(digits, n, idx + 1, temp, res);

            temp.pop_back();      // Backtracking
        }
    }

    vector<string> letterCombinations(string digits) {

        vector<string> res;

        if (digits.empty())
            return res;

        string temp = "";
        int n = digits.size();
        int idx = 0;
        helper(digits, n,idx, temp, res);

        return res;
    }
};