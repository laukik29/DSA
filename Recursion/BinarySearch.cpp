#include<bits/stdc++.h>
using namespace std;

bool binarySearch(int arr[],int s, int e, int k) {

    //base case 
    if(s>e)
    return false;

    int mid = s+(e-s)/2;

    //BASE CASE 
    if(arr[mid]==k)
    return true;

    if(arr[mid]<k) {
        return binarySearch(arr,mid+1,e,k);
    }
    else {
        return binarySearch(arr,s,mid-1,k);
    }
}

int main()
{
    int arr[6]={2,4,6,10,14,16};
    int size = 6;
    int key = 16;

    cout<<"Present or Not "<<binarySearch(arr,0,5,key)<<endl;

  return 0;
}