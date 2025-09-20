#include <iostream>
#include <cmath>
#include <algorithm>
#include <functional>
using namespace std;

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int arr[45];
        int flag = 40;
        for (int i = 0; i < 40; i++)
        {
            cin >> arr[i];
            if (arr[i] == 0)
            {
                flag = i;
                break;
            }
        }
        sort(arr, arr + flag, greater<int>());
        // reverse(arr, arr + flag);

        long long int sum = 0;
        for (int j = 0; j < flag; j++)
        {
            int result = arr[j];
            for (int k = 0; k < j; k++)
            {
                result *= arr[j];
            }
            sum += result;
        }
        sum *= 2;
        if (sum <= 5000000)
        {
            cout << sum;
        }
        else
            cout << "Too expensive";
        cout << '\n';
    }
}