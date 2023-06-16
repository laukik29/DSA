#include<iostream>
using namespace std;

int factorial(int n)
{
    int fact =1;

    for(int i=1;i<=n;i++)
    {
        fact = fact *i;
    }
    return fact;
}

int ncr( int n, int r) {

    int num = factorial(n);

    int denom = factorial(r) * factorial (n-r);

    return num/denom;


}

int main()
{
    int n,r;
    cin>>n>>r;

    int ans = ncr(n,r);
    cout<<ans<<endl;
    return 0;
}

