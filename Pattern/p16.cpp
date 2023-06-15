#include <iostream>
using namespace std;

// A
// BB
// CCC
// DDDD
// EEEEE

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int k = int('A');
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(k + i);
        }
        cout << endl;
    }

    return 0;
}