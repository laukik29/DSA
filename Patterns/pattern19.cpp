#include <iostream>
using namespace std;

int main()
{
    int rows;
    cout << "Enter the number of rows: ";
    cin >> rows;

    int i = 0;
    while (i < rows)
    {
        int j = 0;
        while (j < i)
        {
            cout << " ";
            j++;
        }

        int k = 0;
        while (k < rows - i)
        {
            cout << "*";
            k++;
        }

        cout << endl;
        i++;
    }

    return 0;
}

// ****
//  ***
//   **
//    *