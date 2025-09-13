#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        char c;
        int n;
        cin >> c >> c >> n;

        long long int arr[n][n];
        for (int j = 0; j < n; j++)
        {
            for (int k = 0; k < n; k++)
            {
                cin >> arr[j][k];
            }
        }

        bool sym = true;
        for (int r = 0; r < (n / 2) + 1; r++)
        {
            for (int x = 0; x < n; x++)
            {
                if (!sym)
                    break;

                if (arr[r][c] < 0 || arr[r][x] != arr[n - r - 1][n - x - 1])
                    sym = false;
            }
        }

        if (sym)
            cout << "Test #" << i + 1 << ": Symmetric.";
        else
            cout << "Test #" << i + 1 << ": Non-symmetric.";

        cout << '\n';
    }
}