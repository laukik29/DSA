#include<bits/stdc++.h>
#include<deque>
using namespace std;
int main()
{
   deque<int> d;

   d.push_back(1);
   d.push_front(2);

    for(int i :d) {
        cout<<i<<" ";
    }
    // d.pop_front();
    // cout<<endl;
    // for(int i:d) {
    //     cout<<i<<" ";
    // }
    cout<<endl;
    cout<<"Print first element index "<<d.at(1)<<endl;

    cout<<"Front "<<d.front()<<endl;
    cout<<"Back "<<d.back()<<endl;

    cout<<"Empty or not "<<d.empty()<<endl;

    cout<<"Before Erase "<<d.size()<<endl;
    d.erase(d.begin()+1);
    cout<<"After Erase "<<d.size()<<endl;

    for(int i :d) {
        cout<<i<<" ";
    }

  return 0;
}