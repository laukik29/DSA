#include<bits/stdc++.h>
using namespace std;

void sayDigits(int n) {
    
    //base case 
    if(n==0) {
        return;
    }

    string arr[10] = {"zero","one","two","three","four","five","six","seven","eight","nine"};
    int digit = n%10;
    n= n/10;

    sayDigits(n);
    cout<<arr[digit]<<" ";
}

int main()
{
    int n;
    cin>>n;

    sayDigits(n);

  return 0;
}