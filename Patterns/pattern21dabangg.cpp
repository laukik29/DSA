#include<iostream>
using namespace std;
int main()
{
    cout<<"enter no >=5";
    cout<<endl;
    int n;
    cin>>n;
    int row =1;
    while(row<=n)
    {
        int count =1;
        while(count<=(n-row+1))
        {
            cout<<count;
            count=count+1;
        }
        int star = 1;
        while(star<=(row-1))
        {
            cout<<"**";
            star = star+1;
        }
        
        int revcount =n-row+1;
        while(revcount>0)
        {
            cout<<revcount;
            revcount = revcount-1;
        }

        cout<<endl;
        row=row+1;
    }
}

// 1234554321
// 1234**4321
// 123****321
// 12******21
// 1********1
