#include <iostream>
#include <iomanip>
using namespace std;

int main()
{
    int n;
    cout << "PERFECTION OUTPUT\n";
    while (cin >> n)
    {
        if (n == 0)
            break;

        int sum = 0;
        for (int i = 1; i * i <= n; i++)
        {
            if (!(n % i))
            {
                if (n / i != i)
                {
                    sum += (n / i) + i;
                }
                else
                    sum += i;
            }
        }
        sum -= n;
        cout << setw(5) << n << "  ";
        if (sum > n)
        {
            cout << "ABUNDANT";
        }
        else if (sum == n)
        {
            cout << "PERFECT";
        }
        else
            cout << "DEFICIENT";
        cout << '\n';
    }

    cout << "END OF OUTPUT\n";
}