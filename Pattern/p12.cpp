#include <iostream>
using namespace std;

// 1         1
// 12       12
// 123     123
// 1234   1234
// 12345 12345

int main()
{
    int n = 5;
    for (int i = 0; i < n; i++)
    {
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }
        for (int j = 1; j < (n - i) * 2; j++)
        {
            cout << " ";
        }
        for (int j = 1; j <= i + 1; j++)
        {
            cout << j;
        }

        cout << endl;
    }

    return 0;
}