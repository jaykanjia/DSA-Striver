#include <iostream>
using namespace std;

// 1
// 2 3
// 4 5 6
// 7 8 9 10
// 11 12 13 14 15

int main()
{
    int n = 5;
    int k = 1;
    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < i + 1; j++)
        {
            cout << k << " ";
            k++;
        }
        cout << endl;
    }
    return 0;
}