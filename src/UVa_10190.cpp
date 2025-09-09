#include <iostream>
using namespace std;

int main()
{
    int n, m;
    while (cin >> n >> m)
    {
        if (m == 1 || m == 0)
        {
            cout << "Boring!" << '\n';
            continue;
        }

        int arr[10000];
        bool boring = false;
        int i = 0;
        while (true)
        {
            if (n % m != 0)
                break;
            arr[i] = n;
            n /= m;
            i++;
        }
        arr[i] = 1;
        if (n != 1)
        {
            boring = true;
        }

        if (boring)
        {
            cout << "Boring!" << '\n';
            continue;
        }

        for (int j = 0; j < i + 1; j++)
        {
            cout << arr[j] << " ";
        }
        cout << '\n';
    }
}