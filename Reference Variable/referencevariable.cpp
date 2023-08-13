#include<bits/stdc++.h>
using namespace std;


//BAD PRACTICE

// int& func(int n) {
//   int num = 3;
//   int& ans = num;
//   return ans;

// }

void update2(int& n ) {
  n++;
}

void update1(int n ) {
  n++;
}

int main()
{
    // int i = 5;
    
    // //create a reference variable 
    // int &j = i;ṇ

    // cout<<i<<j<<endl;
    // i++;
    // cout<<i<<j<<endl;
    // j++;
    // cout<<i<<endl;
    // cout<<j<<endl;

    int n =3;
    
    cout<<"Before "<<n<<endl;
    update2(n);
    cout<<"After "<<endl;

    // func(n);

    
  return 0;
}ṇ