#include<bits/stdc++.h>
using namespace std;
int main()
{
    // int arr[10]={2,5,6};

    // cout<<"The address of the first memory block is "<<arr<<endl;
    // cout<<arr[0]<<endl;
    // cout<<"The address of the first memory block is "<<&arr[0]<<endl;

    // cout<<"4th: "<< *arr+1<<endl; 
    // cout<<"4th: "<< *(arr+1)<<endl; 
    // cout<<"4th: "<< (*arr)+1<<endl; 

    // int arr2[10]= {23,122,41,67};

    // cout<<"2nd index "<<*(arr2+2)<<endl;

    // int i =3;
    // cout<<i[arr2]<<endl;

    // int arr[10]= {23,122,41,67};
    // int temp[10] = {1,2};
    // cout<<sizeof(temp)<<endl;
    // cout<<"1st "<<sizeof(*temp)<<endl;
    // cout<<"2nd "<<sizeof(&temp)<<endl;
    // int *ptr= &temp[0];
    // cout<<sizeof(ptr)<<endl;

    // cout<<sizeof(*ptr)<<endl;
    // cout<<sizeof(&ptr)<<endl;

    // int a[20]= {1,2,3,4,5,6,76,8,9,10,11,12,13,14,15,16,17,18,19,20};
    // cout<<"-> "<<&a[0]<<endl;
    // cout<<&a<<endl;
    // cout<<a<<endl; 

    // int *p= &a[0];
    // cout<<p<<endl;
    // cout<<*p<<endl;
    // cout<<"-> "<<&p<<endl; 

    int arr[10];

    //ERROR
    // arr= arr+1;

    int *ptr= &arr[0];
    cout<<ptr<<endl;
    ptr = ptr+1;
    cout<<ptr+1<<endl;

  return 0;
}