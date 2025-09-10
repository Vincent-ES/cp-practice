#include <iostream>
using namespace std;

int main()
{
    int a, b, c, d;
    while (cin >> a >> b >> c >> d)
    {
        if (a == 0 && b == 0 && c == 0 && d == 0)
        {
            break;
        }

        int s_min = c * 60 + d - a * 60 - b;
        if (s_min < 0)
        {
            s_min += 1440;
        }
        cout << s_min << '\n';
    }
}