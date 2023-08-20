#include<bits/stdc++.h>
using namespace std;

inline int getMax(int a, int b) {

    return (a>b) ? a:b;
}

void func(int a, int b) {

    a++;
    b++;
    cout<< a << b <<endl;

}
int main()
{
    int a=1, b=2;
    // func(a,b);
    int ans = 0;

    // if(a>b) {
    //     ans = a;
    // }

    // else {
    //     ans = b;
    // }

    ans = (a>b) ? a:b;

    // ans = getMax(a,b);
    ans = (a>b) ? a:b;

    cout<<ans<<endl;

    a = a+3;
    b = b+1;

    ans = (a>b) ? a:b;

    // ans = getMax(a,b);
    ans = (a>b) ? a:b;
    cout<<ans<<endl;
     
  return 0;
}