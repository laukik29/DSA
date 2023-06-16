#include<iostream>
using namespace std;
int main()
{
    int num =1;
    char ch = '1';

    switch(ch)
    {
        case 1: cout<<"First"<<endl;
                cout<<"First Again"<<endl;
        break;

        case '1': switch(num){
            case 1: cout<<"value of num is "<<num<<endl;
        break;
        }
        break;

        default : cout<<"it is default case"<<endl;

    }
    cout<<endl;

}