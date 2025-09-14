#include <iostream>
#include <string>
using namespace std;

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    int t;
    cin >> t;
    while (t--)
    {
        int sum = 0;
        string s;
        for (int i = 0; i < 4; i++)
        {
            cin >> s;
            for (int j = 0; j < 4; j++)
            {
                int a = s[j] - '0';
                if (j % 2)
                    sum += a;
                else
                    sum += ((2 * a) / 10) + ((2 * a) % 10);
            }
        }

        if (sum % 10 == 0)
        {
            cout << "Valid";
        }
        else
            cout << "Invalid";

        cout << '\n';
    }
}