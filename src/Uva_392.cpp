#include <iostream>
using namespace std;

int main()
{
    int arr[9];
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (cin >> arr[0])
    {
        for (int i = 1; i < 9; i++)
        {
            cin >> arr[i];
        }
        bool all_zero = true;
        for (int i = 0; i < 9; i++)
        {
            if (arr[i])
            {
                all_zero = false;
                break;
            }
        }
        if (all_zero)
        {
            cout << 0 << '\n';
            continue;
        }
        bool not_first = false;
        for (int i = 0; i < 9; i++)
        {
            if (!arr[i])
            {
                continue;
            }

            if (not_first)
            {
                cout << (arr[i] < 0 ? " - " : " + ");
            }
            else
            {
                if (arr[i] < 0)
                {
                    cout << '-';
                }
                not_first = true;
            }
            int x = abs(arr[i]);
            if (x != 1 || i == 8)
            {
                cout << x;
            }

            if (i < 7)
            {
                cout << "x^" << 8 - i;
            }
            else if (i == 7)
            {
                cout << 'x';
            }
        }
        cout << '\n';
    }
}