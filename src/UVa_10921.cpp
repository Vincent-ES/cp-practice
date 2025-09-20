#include <iostream>
#include <map>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        int hyphens = 0;
        int letters = 0;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] >= 'A' && s[i] <= 'Z')
            {
                int num = s[i] - 'A';
                if (num <= 14)
                {
                    cout << num / 3 + 2;
                }
                else if (num <= 18)
                {
                    cout << 7;
                }
                else if (num <= 21)
                {
                    cout << 8;
                }
                else
                    cout << 9;
                letters++;
            }

            else if (s[i] == '-')
            {
                cout << '-';
                hyphens++;
            }
            else
                cout << s[i];
        }
        cout << " " << letters << " " << hyphens;
        cout << '\n';
    }
}