#include<bits/stdc++.h>
using namespace std;
//string length <=100 and all characters a or A
char getMaxOccCharacter( string s) {

    int arr[26]={0};

    //create an array of count of characters 
    for (int i =0; i<s.length();i++) {
        char ch = s[i];
        int number = 0;
        
        //lowercase
        // if(ch>='a' && ch <='z') {
        //     number = ch-'a';
        // }
        // //uppercase
        // else {
        //     number = ch-'A';
        // }
        
        //if only lower case char 
        number = ch -'a'; 
        arr[number]++;
    }

    //find max occ char
    int maxi=-1, ans = 0;
    for(int i =0;i<26;i++) {
        if(maxi<arr[i]) {
            ans = i;
            maxi = arr[i];
        }
    }
    char finalAns = 'a' +ans;
    return finalAns;

}
int main()
{
    string s;
    cin>>s;

    cout<<getMaxOccCharacter(s)<<endl;
  return 0;
}