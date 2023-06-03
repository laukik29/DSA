#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row=1;
    while(row<=n)
    {
        int col=0;
        while(col<n)
        {
                char ch = 'A'+col;
                cout<< ch;
                col=col+1;
        }
        cout<<endl;
        row=row+1;
    }


}
// ABC
// ABC
// ABC