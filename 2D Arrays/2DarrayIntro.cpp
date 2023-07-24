#include<bits/stdc++.h>
using namespace std;

bool isPresent(int arr[][4], int target, int row, int col) {

  for(int row =0;row<3;row ++) {
    for(int col = 0 ;col<4; col++) {
      if(arr[row][col] == target) {
        return 1;
      }
    }
  }
  return 0;
}
//to print row wise sum
int rowWiseSum(int arr[][4],int row, int col) {
    
    cout<<"Row wise sum is " <<endl;
    for(int row =0;row<3;row ++) {
      int sum =0;
    for(int col = 0 ;col<4; col++) {
      sum += arr[row][col];
    }
    cout<<sum<<" ";
    }
    cout<<endl;
}

int largestRowSum(int arr[][4],int row, int col) {

  int maxi = INT_MIN;
  int rowIndex = -1;
  for(int row =0;row<3;row ++) {
      int sum =0;
    for(int col = 0 ;col<4; col++) {
      sum += arr[row][col];
    }

    if(sum>maxi) {
        maxi= sum;
        rowIndex = row;
    }
    
    }
    cout<<"The maximum sum is "<<maxi<<endl;
    return row;
}

//to print col wise sum
int colWiseSum(int arr[][4],int row, int col) {
    
    cout<<"Col wise sum is " <<endl;
    for(int col =0;col<4;col ++) {
      int sum =0;
    for(int row = 0 ;row<3; row++) {
      sum += arr[row][col];
    }
    cout<<sum<<" ";
    }
    cout<<endl;
}

int main()
{
    // //create 2D array 
    int arr[3 ][4];

    // initialise a 2D array
    // int arr[3][4] = {1,2,3,4,5,6,7,8,9,10,11,12};

    //initialise by giving the rows
    // int arr[3][4] ={ {1,11,111,1111}, { 2,22,222,2222} , {3,33,333,3333}};
    
    cout<<"Enter the Elements "<<endl;
    //taking input row wise
    for (int i =0;i<3;i++) {
      for (int j =0; j<4;j++) {
          cin >> arr[i][j];
      }
    }

    // //taking input column wise
    // for (int i =0;i<4;i++) {
    //   for (int j =0; j<3;j++) {
    //       cin>> arr[j][i];
    //   }
    // }

    //printing 
    cout<<"Printing the array "<<endl;
    for (int i =0;i<3;i++) {
      for (int j =0; j<4;j++) {
          cout<<arr[i][j] << " ";
      }
      cout<<endl;
    }

    cout<<"enter the element to search "<<endl;
    int target;
    cin>> target;

    if(isPresent(arr, target,3,4)) {
      cout<<" Element found "<<endl;
    }
    else {
      cout<<" Not Present "<<endl;
    }

    rowWiseSum(arr,3,4);
    colWiseSum(arr,3,4);

    cout<<"Max row is at index "<< largestRowSum(arr,3,4) <<endl;
  return 0;
}