#include<bits/stdc++.h>
using namespace std;

int score = 15; 

void b(int& i) {
    cout<<i<<" Score in b "<<score<<endl;
}

void a(int& i) {
    //local variable 
    char ch = 'a';

    cout<<i<<endl;
    score++;
    cout<<i<<" Score in a++ "<<score<<endl;
    b(i);    
}
int main()
{
    int i =6;
    a(i);

  return 0;
}