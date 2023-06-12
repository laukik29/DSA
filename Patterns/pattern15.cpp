#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =1;
    while(row<=n)
    {
        int col =1;

        while(col<=row)
        {
            char value;
            value = 'A'+ col + row-2;
            cout<<value;
            col = col+1;
        
        }
        cout<<endl;
        row = row +1;
    }
}
// A
// BC
// CDE
// DEFG