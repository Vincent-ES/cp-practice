#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    for (int i = 0; i < t; i++)
    {
        int a, b;
        cin >> a >> b;

        int s = 0;
        for (int j = a; j <= b; j++)
        {
            if (j % 2 == 1)
            {
                s += j;
            }
        }
        cout << "Case " << i + 1 << ": " << s << "\n";
    }
}