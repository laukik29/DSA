#include<bits/stdc++.h>
#include<stack>
using namespace std;
int main()
{
    stack<string> s;

    s.push("hello");
     s.push("world");
      s.push("cpp"); //pushed last and will be removed first!!

    cout<<"Top Element "<<s.top()<<endl;

    s.pop();

     cout<<"Top Element "<<s.top()<<endl; 

     cout<<"Size of stack "<<s.size()<<endl;
     cout<<"Empty or not "<<s.empty()<<endl;

  return 0;
}  