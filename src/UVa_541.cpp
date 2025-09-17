#include <iostream>
using namespace std;

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
            break;
        int arr[n][n];
        for (int i = 0; i < n; i++)
        {
            for (int j = 0; j < n; j++)
            {
                cin >> arr[i][j];
            }
        }

        int count_c = 0, count_r = 0, flag_c, flag_r;
        for (int k = 0; k < n; k++)
        {
            int sum_c = 0, sum_r = 0;
            for (int w = 0; w < n; w++)
            {
                sum_c += arr[w][k];
                sum_r += arr[k][w];
            }
            count_c += sum_c % 2;
            count_r += sum_r % 2;
            if (sum_c % 2)
            {
                flag_c = k;
            }
            if (sum_r % 2)
            {
                flag_r = k;
            }
        }
        if (count_c == 0 && count_r == 0)
        {
            cout << "OK";
        }
        else if (count_c == 1 && count_r == 1)
        {
            cout << "Change bit (" << flag_r + 1 << "," << flag_c + 1 << ")";
        }
        else
            cout << "Corrupt";

        cout << '\n';
    }
}