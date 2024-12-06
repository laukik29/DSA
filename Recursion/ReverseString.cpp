#include<bits/stdc++.h>
using namespace std;

void reverseString(string& str, int i, int j) {

    //base case
    if(i>j) {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    //recirsive call
    reverseString(str, i, j);
}
int main()
{
    string name = "abcde";

    reverseString(name, 0, name.length());

    cout<<name<<endl;

  return 0;
}