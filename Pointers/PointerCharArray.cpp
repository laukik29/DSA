#include<bits/stdc++.h>
using namespace std;
int main()
{
    int arr[5] = {1,2,3,4,5};
    char ch [6]= "abcde";

    cout<<arr<<endl;

    cout<<ch<<endl;

    int *ptr = &arr[0];
    char *c = &ch[0];

    cout<<ptr<<endl;

    //prints the entire string 
    cout<<c<<endl;

    char temp = 'z';
    char *p = &temp;

    cout<<p<<endl;


  return 0;
}