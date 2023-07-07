#include<bits/stdc++.h>
using namespace std;
int main()
{
  list<int> l;

  list<int> n(l);
  cout<<"Copy of l, n "<<endl;
     for(int i:n) {
    cout<<i<< " ";
  }
  //5 times 100
  list<int> m(5,100);
    cout<<"m is "<<endl;
     for(int i:m) {
    cout<<i<< " ";
  }
  cout<<endl;

  l.push_back(1);
  l.push_front(2);
  
  for(int i:l) {
    cout<<i<< " ";
  }
  cout<<endl;
  l.erase(l.begin());
  cout<<"After Erase "<<endl;
     for(int i:l) {
    cout<<i<< " ";
  }

  cout<<"size of list "<<l.size()<<endl;
  
  return 0;
}