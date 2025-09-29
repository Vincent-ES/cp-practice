#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int n, m, x, count = 1;
    while (cin >> n && n)
    {
        int arr[n];
        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        sort(arr, arr + n);

        cout << "Case " << count << ":\n";
        cin >> m;
        int que[m];
        for (int i = 0; i < m; i++)
        {
            cin >> que[i];
        }

        for (int k = 0; k < m; k++)
        {
            int delta = que[k] - (arr[0] + arr[1]);
            for (int i = 0; i < n; i++)
            {
                for (int j = i + 1; j < n; j++)
                {
                    x = arr[i] + arr[j];
                    if (abs(delta) > abs(que[k] - x))
                    {
                        delta = que[k] - x;
                    }
                }
                if (delta == 0)
                {
                    break;
                }
                if (arr[i] > que[k])
                {
                    break;
                }
            }
            cout << "Closest sum to " << que[k] << " is " << que[k] - delta << '.';
            cout << '\n';
        }
        count++;
    }
}