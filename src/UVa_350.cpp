#include <iostream>
using namespace std;

int main()
{
    int z, i, m, l;
    int c = 1;
    while (cin >> z >> i >> m >> l)
    {
        if (m == 0)
        {
            break;
        }
        int arr[m + 5];
        arr[0] = l;

        int count = 0;
        bool status = false;
        for (int k = 1; k < m; k++)
        {
            int next = (z * l + i) % m;
            for (int j = 0; j < k; j++)
            {
                if (next == arr[j])
                {
                    status = true;
                    count = k - j;
                    break;
                }
            }
            if (status)
            {
                cout << "Case " << c << ": " << count << "\n";
                break;
            }
            arr[k] = next;
            l = next;
        }
        c++;
    }
}
