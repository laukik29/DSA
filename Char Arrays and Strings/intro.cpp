#include<bits/stdc++.h>
using namespace std;

//in palindrome have to make sure if upperlower cases are allowed so we convert them 
char to_lower_case(char ch) {
    if(ch >='a' && ch <='z') {
        return ch;
    }
    else {
        char temp = ch - 'A' + 'a';
        return temp;
    }

}
bool check_palindrome(char a[], int n) {
    int s =0; 
    int e = n-1;

    while(s<=e) {
        if(to_lower_case(a[s]) != to_lower_case(a[e])) {
            return 0;
        }
        else {
            s++;
            e--;
        }
        return 1;
    }

}

int get_length(char name[]) //no need to pass size of character array 
{
    int count = 0;
    for(int i =0; name[i] !='\0'; i++) {
        count ++;
    }
    return count;
}

void reverse_string(char name[], int n) {
    int s =0;
    int e = n-1;
    
    while(s<e) {
        swap(name[s++],name[e--]);
    }

}

int main()
{
  char name[20];

  cout<< "Enter your name "<<endl;
  cin>>name;
  //after pos 2 no input taken 
//   name[2]='\0';

  cout<< "Your name is "<<endl;
  cout<<name<<endl;
    int len = get_length(name);
  cout<<"Length: "<<len<<endl;

    reverse_string(name,len);
  cout<<"Reverse: "<<name<<endl;

    cout<<"Palendrome or not: "<<check_palindrome(name,len)<<endl;

    cout<<"Character is "<<to_lower_case('b')<<endl;
    cout<<"Character is "<<to_lower_case('C')<<endl;

  return 0;
}