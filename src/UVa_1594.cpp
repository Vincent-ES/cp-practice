#include <iostream>
using namespace std;

int main()
{
    int t;
    cin >> t;
    int leng;
    for (int i = 0; i < t; i++)
    {
        cin >> leng;
        int arr[leng + 5];
        int temp[leng + 5];
        for (int i = 0; i < leng; i++)
        {
            cin >> arr[i];
        }
        bool loop = false;
        for (int j = 0; j < 1000; j++)
        {

            bool all_zero = true;
            for (int k = 0; k < leng - 1; k++)
            {
                temp[k] = abs(arr[k] - arr[k + 1]);
                if (temp[k] != 0)
                {
                    all_zero = false;
                }
            }

            temp[leng - 1] = abs(arr[leng - 1] - arr[0]);
            if (temp[leng - 1] != 0)
            {
                all_zero = false;
            }

            if (all_zero)
            {
                cout << "ZERO\n";
                break;
            }
            if (j == 999)
            {
                loop = true;
            }
            for (int r = 0; r < leng; r++)
            {
                arr[r] = temp[r];
            }
        }

        if (loop)
        {
            cout << "LOOP\n";
        }
    }
}