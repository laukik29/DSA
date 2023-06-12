#include<iostream>
using namespace std;
int main()
{
    int n;
    cin>>n;
    int row =1, space;

    while(row<=n)
    {
       space = n-row;
       while(space>0)
       {
            cout<<" ";
            space=space-1;

       } 
       int col =1;
       while(col<=row)
       {
        cout<<col;
        col=col+1;
       }
       int endcol = row-1;
       while(endcol>0)
       {
        cout<<endcol;
        endcol=endcol-1;

       }
       cout<<endl;
       row=row+1;
    }


}
//    1
//   121
//  12321
// 1234321