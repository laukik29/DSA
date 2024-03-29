class Solution {
public:
    int bitwiseComplement(int n) {

        int m=n;
        //create a mask to mask the starting bits till the end 4
        //shift bits to the right unmtil != 0
        int mask =0;
        //edge case
        if(n==0)
        return 1;

        while(m!=0)
        {
            mask = (mask << 1) | 1;
            m = m >> 1;
        }

        int ans = (~n) &mask;
        return ans;
    }
};