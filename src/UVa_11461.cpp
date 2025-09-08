#include <iostream>
#include <cmath>
using namespace std;

int main()
{
    int a, b;
    while (cin >> a >> b)
    {
        if (a == 0 && b == 0)
        {
            break;
        }

        int a_r = sqrt(a), b_r = sqrt(b);
        int c = 0;
        while (true)
        {
            if (a_r * a_r > b)
            {
                break;
            }
            if (a_r * a_r >= a)
            {
                c++;
            }
            a_r++;
        }
        cout << c << '\n';
    }
}