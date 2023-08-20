#include<bits/stdc++.h>
using namespace std;

int fibonacci(int n) {
    
    //base case 
    if(n==0) {
        return 0;
    }
    else if(n==1) {
        return 1;
    }

    //resursive relation
    int ans = fibonacci(n-1) + fibonacci(n-2);
    return ans;

}
int main()
{
    int n;
    cin>>n;

    cout<<endl;
    
    int ans=fibonacci(n);

     cout<<ans<<endl;

  return 0;
}