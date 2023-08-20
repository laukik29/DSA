#include<bits/stdc++.h>
using namespace std;
int main()
{
    int num = 5;
    
    cout<< num<<endl;

    //addressof operator - &

    cout<<"Address of num "<<&num<<endl; 

    int *ptr = &num;

    //bad practice, gives segmentation fault 
    // int *ptr;

    cout<<"Value is "<<*ptr<<endl;
    cout<<"Value is "<<ptr<<endl;

    double d= 4.2;
    double *p2 = &d;

    cout<<"Value is "<<*p2<<endl;
    cout<<"Value is "<<p2<<endl;

    cout<<"Size of integer is "<<sizeof(num)<<endl;
    cout<<"Size of pointer is "<<sizeof(ptr)<<endl;
    cout<<"Size of pointer2 is "<<sizeof(p2)<<endl;

  return 0;
}