#include<iostream>
using namespace std;
int main()
{   
    int n,i=1,count=1;
    cin>>n;
    while(i<=n)
    {
        int j=1;
        while(j<=i)
        {
            cout<<count;
            j=j+1;
            count=count+1;
        }
        cout<<endl;
        i=i+1;
    }

}
// 1
// 23
// 456
// 7 8 9 10