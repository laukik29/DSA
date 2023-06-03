#include<iostream>
using namespace std;
int main()
{
    int n,i=1,count =1 ;
    cin>>n;
    while(i<=n)
    {
        
        int j=1;
        while(j<=n)
        { 
            cout<<count<<" ";
            count = count +1;
            j=j+1;
        }
        cout<<endl;
        i=i+1;
    }
}

// 123
// 456
// 789