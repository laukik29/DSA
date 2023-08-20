#include<bits/stdc++.h>
using namespace std;

void counting(int n) {

    //base case
    if(n==0) {
        return;
    }

    //tail recursion

    // cout<<n<<endl;
    
    // //Recursive Relation
    // counting(n-1);

    //Head Recursion

    counting(n-1);
    cout<<n<<endl;
}

int main()
{
    int n;
    cin>>n;
    
    cout<<endl;

    counting(n);

  return 0;
}