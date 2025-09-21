#include <iostream>
#include <numeric>
#include <algorithm>
using namespace std;

int gcd(int a, int b)
{
    int t = 1;
    while (t != 0)
    {
        t = a % b;
        a = b;
        b = t;
    }
    return a;
}

int main()
{
    int n;
    while (cin >> n)
    {
        if (n == 0)
        {
            break;
        }

        int g = 0;
        for (int i = 1; i < n; i++)
        {
            for (int j = i + 1; j <= n; j++)
            {
                g += gcd(i, j);
            }
        }

        cout << g << '\n';
    }
}