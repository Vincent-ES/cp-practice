#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (cin >> s)
    {
        if (s == "0")
            break;

        int sum = 0;
        int len = s.length();
        bool odd = s.length() % 2;
        for (int i = 0; i < len; i++)
        {
            if (odd)
            {
                sum += s[i] - '0';
            }
            else
                sum -= s[i] - '0';
            odd = !odd;
        }
        if (sum % 11)
            cout << s << " is not a multiple of 11.\n";
        else
            cout << s << " is a multiple of 11.\n";
    }
}