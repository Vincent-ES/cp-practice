#include <iostream>
#include <string>
#include <algorithm>
using namespace std;
string s(int n)
{
    string ss = "";
    while (n != 0)
    {
        ss += n % 2 ? '1' : '0';
        n /= 2;
    }
    reverse(ss.begin(), ss.end());
    return ss;
}

int main()
{
    int a;
    while (cin >> a)
    {
        if (a == 0)
            break;

        string st = s(a);
        int c = 0;
        for (int i = 0; i < st.length(); i++)
        {
            st[i] == '1' ? c++ : 0;
        }
        cout << "The parity of " << s(a) << " is " << c << " (mod 2).";
        cout << '\n';
    }
}