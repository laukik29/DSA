#include<iostream>
using namespace std;

int power()
{   
    int a, b;
    cin>>a>>b;
    int ans =1;
    for (int i=1;i<=b;i++)
    {
        ans= ans*a;
    }
    return ans;
}

int main()
{
    // int a,b;
    // cin>>a>>b;
    // int answer = power(a,b);
    // cout<<answer<<endl;

    // int c,d;
    // cin>>c>>d;
    // int answer2 = power(c,d);
    // cout<<answer2<<endl;
    
    int ans= power();
    cout<<ans<<endl;
    return 0;
}

