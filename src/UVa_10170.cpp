#include <iostream>
using namespace std;

int num(long long int s, long long int d)
{
    if (d - s > 0)
    {
        d = d - s;
        s++;
        return num(s, d);
    }
    else
        return s;
}

int main()
{
    ios_base::sync_with_stdio(0);
    cin.tie(0);
    long long int s, d;
    while (cin >> s >> d)
    {
        cout << num(s, d) << '\n';
    }
}