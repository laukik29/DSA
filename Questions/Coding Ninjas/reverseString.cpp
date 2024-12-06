#include <bits/stdc++.h> 
void reverse(string& str, int i, int j)
{
	// Write your code here.
	//base case
    if(i>j) {
        return;
    }

    swap(str[i], str[j]);
    i++;
    j--;

    //recirsive call
    reverse(str, i, j);
}

string reverseString(string str) {
	reverse(str, 0, str.length()-1);
	return str;
}