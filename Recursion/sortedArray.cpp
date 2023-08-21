#include<bits/stdc++.h>
using namespace std;

bool isSorted(int arr[], int size) {

    //base case
    if(size ==0 || size ==1) {
        return true;
    }

    if(arr[0]>arr[1])
    return false;

    else {
        bool remainingPart = isSorted(arr+1, size -1);
        return remainingPart;
    }
}

int getSum(int *arr, int size) {

    //base case 
    if(size ==0 ) {
        return 0;
    }
    if(size == 1) {
        return arr[0];
    }

    else {
        int remainingPart = getSum(arr+1, size -1);
        int sum = arr[0]+remainingPart;
        return sum;
    }
}

int main()
{
    int arr[5] =  {2,4,6,8,9};
    int size = 5;

    bool ans = isSorted(arr,size);

    if(ans) {
        cout<<"Array is Sorted "<<endl;
    }

    else
    cout<<"Array is not sorted "<<endl;

    int sum = getSum(arr,size);
    cout<<"Sum is "<<sum<<endl;

  return 0;
}