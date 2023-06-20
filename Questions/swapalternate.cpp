// arr[5]={1,2,7,8,5}
// op = {2,1,8,7,5}

#include<iostream>
using namespace std;

void printarray(int arr[], int size)
{
    for(int i=0;i<size;i++)
    {
        cout<<arr[i]<< " ";

    }
    cout<<endl;
}

void swapaltewrnate(int arr[], int size )
{
   for(int i=0;i<size; i+=2)
   {
        if(i<=size)
        {
        swap(arr[i],arr[i+1]);
        }
   } 
}

int main()
{

    int even[8]={5,2,9,4,5,3,4,5};
    int odd[5]= {2,3,5,6,2};

    swapaltewrnate(even,8);
    swapaltewrnate(odd,5);

    printarray(even,8);
    printarray(odd,5);

    return 0;

}