class Solution {
public:
    long long sumAndMultiply(int n) {
        long long sum = 0;
        long long x = 0;

        string s = to_string(n);

        for (char ch : s) {
            if (ch != '0') {
                x = x * 10 + (ch - '0');
                sum += (ch - '0');
            }
        }

        return x * sum;
    }
};