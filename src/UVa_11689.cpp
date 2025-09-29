#include <iostream>
using namespace std;

int main()
{
    int n;
    cin >> n;
    while (n--)
    {
        int e, f, c;
        cin >> e >> f >> c;
        int bottles = e + f;
        int sum = 0;
        int left = 0;
        while (((bottles + left) / c) >= 1)
        {
            bottles += left;
            left = bottles % c;
            bottles /= c;
            sum += bottles;
        }
        cout << sum << '\n';
    }
}