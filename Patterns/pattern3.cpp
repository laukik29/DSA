#include<iostream>
using namespace std;
int main()
{
    int n,i=1;
    cin>>n;
    while(i<=n)
    {   
        int j=1;
        while(j<=n)
        {
            //cout<<j;
            cout<<n-j+1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }


}

// 1234
// 1234
// 1234
// 1234