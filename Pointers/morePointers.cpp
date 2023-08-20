#include<bits/stdc++.h>
using namespace std;
int main()
{
    //pointer is created pointing to some garbage address
    // int *p;
    // cout<< *p<<endl;

    // int i = 5;
    // // int *p = &i;

    // // can be initialised in both ways 
    // int *q = &i;
    // cout<<q<<endl;
    // cout<<*q<<endl;

    // int *p =0;
    // p = &i;

    // cout<<p<<endl;
    // cout<<*p<<endl;

    int num = 5;
    int a = num;
    cout<<"a before "<<num<<endl;
    a++;
    cout<<"a after "<<num<<endl;
    //num remains the same

    int *p = &num;
    cout<<"Before "<<num<<endl;
    (*p)++;
    cout<<"After "<<num<<endl;

    //copying a pointer
    int *q =p;
    cout<<p<<" "<<q<<endl;
    cout<<*p<<" "<<*q<<endl;

    //important concept 

    int i =3;
    int *t = &i;
    // cout<<(*t)++<<endl;
    *t = *t +1;
    cout<<*t<<endl;
    
    cout<<"Before t"<<t<<endl;
    t= t+1;
    cout<<"After t"<<t<<endl;


  return 0;
}