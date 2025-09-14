#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int arr[n];

        for (int i = 0; i < n; i++)
        {
            cin >> arr[i];
        }
        int count = 0;
        for (int j = 1; j < n; j++)
        {
            for (int k = 0; k < j; k++)
            {
                count += 1 ? (arr[j] >= arr[k]) : 0;
            }
        }
        cout << count << '\n';
    }
}