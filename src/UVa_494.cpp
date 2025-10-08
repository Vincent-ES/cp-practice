#include <iostream>
#include <string>
using namespace std;

int main()
{
    string s;
    while (getline(cin, s))
    {
        s += " ";
        int count = 0;
        bool ok = false;
        bool first_char = true;
        for (int i = 0; i < s.length(); i++)
        {
            if (s[i] <= 'z' && s[i] >= 'a')
            {
                ok = true;
            }
            else if (s[i] <= 'Z' && s[i] >= 'A')
            {
                ok = true;
            }
            else if (ok)
            {
                count++;
                ok = !ok;
            }
        }
        cout << count << '\n';
    }
    return 0;
}