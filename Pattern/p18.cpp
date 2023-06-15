#include <iostream>
using namespace std;

// E
// DE
// CDE
// BCDE
// ABCDE

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        int k = int('A');
        for (int j = n - i - 1; j < n; j++)
        {
            cout << char(k + j);
        }
        cout << endl;
    }

    return 0;
}