#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    
    int ans = 0;
    int base = 1;

    while (n != 0)
    {
        int bit = n & 1;
        ans = ans + (bit * base);
        n = n >> 1;
        base = base * 10;
    }

    cout << ans << endl;

    return 0;
}
