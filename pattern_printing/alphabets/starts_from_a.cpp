#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        char alphabet = 'a';
        for (int j = 1; j <= i; j++)
        {
            cout << alphabet++;
        }
        cout << endl;
    }

    return 0;
}
// a
// ab
// abc
// abcd
// abcde