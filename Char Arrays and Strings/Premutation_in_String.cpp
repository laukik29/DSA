class Solution {
private: 
    bool checkEqual(int a[26], int b[26]) {
        for (int i = 0; i < 26; i++) {
            if (a[i] != b[i])
                return false;
        }
        return true;
    }

public:
    bool checkInclusion(string s1, string s2) {
        // Character count array 
        int count1[26] = {0};

        for (int i = 0; i < s1.length(); i++) {
            int index = s1[i] - 'a';
            count1[index]++;
        }

        // Traverse s2 string in a window of size s1 length and compare
        int i = 0;
        int windowSize = s1.length();
        int count2[26] = {0};

        // Running for the first window
        while (i < windowSize && i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            i++;
        }

        if (checkEqual(count1, count2))
            return true;

        // Continue for the remaining windows
        while (i < s2.length()) {
            int index = s2[i] - 'a';
            count2[index]++;
            
            int oldIndex = s2[i - windowSize] - 'a';
            count2[oldIndex]--;
            i++;

            if (checkEqual(count1, count2))
                return true;
        }

        return false;
    }
};