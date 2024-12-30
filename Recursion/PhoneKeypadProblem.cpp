class Solution {
private:
    void solve(string digit, string output, int index, vector<string>& ans, string mapping) {

        // Base case
        if (index >= digit.length()) {
            ans.push_back(output);
            return;
        }

        int number = digit[index] - '0'; // Convert char to int
        string value = mapping[number];

        for (int i = 0; i < value.length(); i++) {
            output.push_back(value[i]);
            solve(digit, output, index + 1, ans, mapping);
            output.pop_back(); // Backtrack to make it an empty string again
        }

    }

public:
    vector<string> letterCombinations(string digits) {

        vector<string> ans;
        string output;

        if (digits.length() == 0)
            return ans;

        int index = 0;
        string mapping = {"", "", "abc", "def", "ghi", "jkl", "mno", "pqrs", "tuv", "wxyz"};
        solve(digits, output, index, ans, mapping);
        return ans;
    }
};