#include <iostream>
using namespace std;
int x = 1;
int main()
{
    int n;
    cin >> n;
    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)

        {
            cout << x++;
        }
        cout << endl;
    }
}

// 1
// 23
// 456
// 78910
// 1112131415