#include <iostream>
using namespace std;

// ABCDE
// ABCD
// ABC
// AB
// A

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < n - i; j++)
        {
            int k = int('A');
            cout << char(k + j);
        }
        cout << endl;
    }

    return 0;
}