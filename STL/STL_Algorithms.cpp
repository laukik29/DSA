#include<bits/stdc++.h>
#include<algorithm>
#include<vector>

using namespace std;
int main()
{
  vector<int> v;

  v.push_back(1);  
  v.push_back(3); 
  v.push_back(6); 
  v.push_back(7); 

//check of present or not
  cout<<"Finding 6 --> "<<binary_search(v.begin(),v.end(), 6 )<<endl;
  
//finding lower and upper bound for 6
//returns iterator and thus subtract with begin to get the upper or lower bound
  cout<<"lower bound --> "<<lower_bound(v.begin(),v.end(),6)-v.begin()<<endl;
  cout<<"upper bound --> "<<upper_bound(v.begin(),v.end(),6)-v.begin()<<endl;

  int a =3;
  int b =4;

  cout<<"max --> "<<max(a,b)<<endl;
  cout<<"min --> "<<min(a,b)<<endl;

  swap(a,b);
  cout<<endl<<"a --> "<<a<<endl;

  string abcd = "abcd";
  reverse(abcd.begin(),abcd.end());
  cout<<"string --> "<<abcd<<endl;
//rotate at 3
  rotate(v.begin(),v.begin()+1,v.end());
  cout<<"After rotate "<<endl;
  for(int i:v) {
    cout<<i<<" ";
  }
  cout<<endl<<"After sorting "<<endl;

  sort(v.begin(),v.end());
  for(int i:v) {
    cout<<i<<" ";
  }

  return 0;
}