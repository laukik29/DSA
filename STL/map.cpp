#include<bits/stdc++.h>
#include<map>
using namespace std;
int main()
{
  map<int,string> m;

  m[1] = "Hello";  
  m[2] = "World"; 
  m[5] = "Cpp"; 

  m.insert({5,"programming"});

  cout<<"Before erase"<<endl;
  for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }

  cout<<"Finding -13-->"<<m.count(-13)<<endl;

  m.erase(13);
  cout<<"After erase "<<endl;
   for(auto i:m) {
    cout<<i.first<<" "<<i.second<<endl;
  }cout<<endl<<endl;

  auto it = m.find(5);

  for(auto i= it;i!=m.end();i++) {
    cout<<(*i).first<<endl;
  }

  return 0;
}