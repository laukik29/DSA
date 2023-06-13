class Solution {
public:
    int subtractProductAndSum(int n) {
        int p=1,s=0,d,ans;
        while(n>0)
        {
            d=n%10;
            n=n/10;
            p=p*d;
            s=s+d;
        }
            ans = p-s;
            return(ans);
    }
};