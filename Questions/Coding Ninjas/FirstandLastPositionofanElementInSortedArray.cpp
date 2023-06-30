#include<iostream>
using namespace std;

int findfirstOccurance(int arr[], int size, int key)
{
    int start =0, end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end)
    {
        if(arr [mid] == key) {
            ans = mid; 
            end = mid -1;
        }
        else if(key > arr [mid]) {
            start = mid +1 ;
        }
        else if(key < arr [mid]) {
            end = mid -1 ;
        }
        mid = start + (end - start)/2;
 
    }
    return ans;
}

int findlastOccurance(int arr[], int size, int key)
{
    int start =0, end = size-1;
    int mid = start + (end - start)/2;
    int ans = -1;

    while(start<=end)
    {
        if(arr [mid] == key) {
            ans = mid; 
            start = mid + 1;
        }
        else if(key > arr [mid]) {
            start = mid +1 ;
        }
        else if(key < arr [mid]) {
            end = mid -1 ;
        }
        mid = start + (end - start)/2;  
    }
    return ans;
}

int main() {

    int even[5] = {1,2,3,3,4};

    cout<<" first occurance of 3 is "<<findfirstOccurance(even,5,3)<<endl;
    cout<<" last occurance of 3 is "<<findlastOccurance(even,5,3);

    return 0;
}