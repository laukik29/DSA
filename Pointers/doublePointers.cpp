#include<bits/stdc++.h>
using namespace std;

void update(int **p) {
    
    // p = p+1; //No change

    // *p = *p +1; //Yes Change

    **p = **p +1; 
}


int main()
{
    int i = 5;
    int* p = &i;
    int** p2= &p;

    // cout<<endl<<endl<<"all good"<<endl<<endl;

    // cout<<"Printing P"<<p<<endl;
    // cout<<"address of P"<<&p<<endl;

    // cout<<"Value at P2 "<<*p2<<endl;

    // //to print 5
    // cout<<i<<endl;
    // cout<<*p<<endl;
    // cout<<**p2<<endl;

    // //to print address of i
    // cout<<&i<<endl; 
    // cout<<p<<endl;
    // cout<<*p2<<endl;

    // //to ptint address of p
    // cout<<&p<<endl;
    // cout<<p2<<endl;


    cout<<endl<<endl;
    cout<<"Before "<<i<<endl;
    cout<<"Before "<<p<<endl;
    cout<<"Before "<<p2<<endl;
    update(p2);
    cout<<"After "<<i<<endl;
    cout<<"After "<<p<<endl;
    cout<<"After "<<p2<<endl;
    cout<<endl<<endl;

  return 0;
}