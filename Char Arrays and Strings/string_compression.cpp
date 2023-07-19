class Solution {
public:
    int compress(vector<char>& chars) {
        int i =0;
        int ansIndex =0;
        int n = chars.size();

        while(i<n) {
            int j = i+1;
            while(j<n && chars[i] ==chars[j]) {
                j++;
            }

            //store old char
            chars[ansIndex++]= chars[i];

            int count = j-i;
            
            if(count >1) {
                //converting counting into single digit and saving in ans 
                string cnt = to_string(count);
                for(char ch: cnt) {
                    chars[ansIndex++]= ch;
                }
                
            }
            i=j;

        }
        return ansIndex;
    }
};