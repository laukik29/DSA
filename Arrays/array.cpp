#include<iostream>
using namespace std;

void printarray(int arr[], int size) {

     for(int i=0;i<size;i++)
     {
        cout<<arr[i]<<" ";
    
     }
     cout<<"Printing done "<<endl;
}


int main()
{
    //declare
     int number[15];

     //accessing an array
     cout<<"Value at 1 index "<<number[1]<<endl;

     //initialize
     int second[3]={5,7,11};
     cout<<"Value at 2 index "<<second[2]<<endl;

     //printing the array   
     int third[15]={2,7};
     int n=15;
     cout<<"Printing the array "<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<third[i]<<" ";
     }

     //initializing all locations with 0
     int fourth[15]={0};
     cout<<"Printing the array "<<endl;
    //  
    printarray(fourth,15);
    int fourthsize = sizeof(fourth)/sizeof(int);
    cout<<"Size of fourth is "<<fourthsize<<endl;

    //trying to initializing all locations with 1
    int fifth[15]={1};
     cout<<"Printing the array "<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<fifth[i]<<" ";
     }
     //correct way to initialize all locations except 0
     int sixth[15];
     fill_n(sixth,15,1);
     cout<<"Printing the array "<<endl;
     for(int i=0;i<n;i++)
     {
        cout<<sixth[i]<<" ";
     }

     char ch[5] = {'a','b','e','d','s'};
     cout<<endl;
     cout<<ch[3]<<endl;
     //printing the array
      for(int i =0;i<5;i++) {
      cout<<ch[i]<<" ";   
      }

      double firstDouble[4];
      float firstFloat[5];
      bool firstBool[6];

      
     return 0;
}