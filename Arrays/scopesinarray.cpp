#include<iostream>
using namespace std;

void update(int arr[], int n)
{
    cout<<"inside the function"<<endl;
    //printing the array

    for(int i=0;i<n;i++)
    {
        cout<<arr[i]<<" ";

    }
    cout<<endl<<"going back to the main function"<<endl;

}   

int main()
{
    int arr[3]={1,2,3};

    update(arr,3);

    //printing the array 
    cout<<endl<<"printing in the main function "<<endl;
    for(int i=0;i<3;i++)
    {
        cout<<arr[i]<<" ";

    }

}