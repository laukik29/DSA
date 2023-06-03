#include<iostream>
using namespace std;

int main()
{
    char a;
    cin >> a;
    int b = int(a);

    if (97 <= b && b <= 122)
    {
        cout << "Small letter" << endl;
    }
    else if (65 <= b && b <= 90)
    {
        cout << "Capital letter" << endl;
    }
    else if (48 <= b && b <= 57)
    {
        cout << "Number" << endl;
    }
    else
    {
        cout << "Invalid character" << endl;
    }

    return 0;
}