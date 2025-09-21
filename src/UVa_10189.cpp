#include <iostream>
using namespace std;

int main()
{
    int a, b;
    int times = 1;
    while (cin >> a >> b)
    {
        char arr[a + 2][b + 2];
        for (int i = 1; i < a + 1; i++)
        {
            for (int j = 1; j < b + 1; j++)
            {
                cin >> arr[i][j];
                if (arr[i][j] == '.')
                    arr[i][j] = '0';
            }
        }

        for (int k = 1; k < a + 1; k++)
        {
            for (int r = 1; r < b + 1; r++)
            {
                if (arr[k][r] == '*')
                {
                    for (int w = -1; w < 2; w++)
                    {
                        for (int x = -1; x < 2; x++)
                        {
                            if ((x == 0 && w == 0) || arr[k + w][r + x] == '*')
                                continue;
                            arr[k + w][r + x] += 1;
                        }
                    }
                }
            }
        }

        cout << "Field #" << times << ":" << '\n';
        for (int z = 1; z < a + 1; z++)
        {
            for (int y = 1; y < b + 1; y++)
            {
                cout << arr[z][y];
            }
            cout << '\n';
        }

        cout << '\n';
        times++;
    }
}