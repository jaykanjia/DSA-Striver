#include <iostream>
using namespace std;

//     A
//    ABA
//   ABCBA
//  ABCDCBA

int main()
{
    int n = 4;
    for (int i = 0; i < n; i++)
    {
        int k = int('A');
        for (int j = 0; j < (n - i); j++)
        {
            cout << " ";
        }
        for (int j = 0; j < i + 1; j++)
        {
            cout << char(k + j);
        }
        for (int j = 1; j < i + 1; j++)
        {
            cout << char(k + i - j);
        }
        cout << endl;
    }

    return 0;
}