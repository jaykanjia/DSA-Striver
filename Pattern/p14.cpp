#include <iostream>
using namespace std;

// A
// AB
// ABC
// ABCD
// ABCDE

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            int k = int('A');
            cout << char(k + j);
        }
        cout << endl;
    }

    return 0;
}
