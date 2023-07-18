class Solution {
private:
    bool valid(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= 'A' && ch <= 'Z') || (ch >= '0' && ch <= '9')) {
            return true;
        }
        return false;
    }

    char to_lower_case(char ch) {
        if ((ch >= 'a' && ch <= 'z') || (ch >= '0' && ch <= '9')) {
            return ch;
        } else {
            char temp = ch - 'A' + 'a';
            return temp;
        }
    }

    bool check_palindrome(string str) {
        int start = 0;
        int end = str.length() - 1;

        while (start <= end) {
            if (str[start] != str[end]) {
                return false;
            } else {
                start++;
                end--;
            }
        }
        return true;
    }

public:
    bool isPalindrome(string s) {
        // Remove unwanted characters
        string temp = "";
        for (int j = 0; j < s.length(); j++) {
            if (valid(s[j])) {
                temp.push_back(s[j]);
            }
        }

        // Convert to lowercase
        for (int j = 0; j < temp.length(); j++) {
            temp[j] = to_lower_case(temp[j]);
        }

        // Check palindrome
        return check_palindrome(temp);
    }
};
