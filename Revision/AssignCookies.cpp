#include <iostream>
#include <algorithm>
using namespace std;
int main()
{
    int n = 4;
    int m = 4;
    int g[] = {1, 4, 3, 2}; // greed array
    int c[] = {1, 4, 2, 3}; // cookee array

    // sorting -> use - bubble sort
    for (int i = 0; i < n; i++) // n-1 passes
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (g[j] > g[j + 1])
            {
                swap(g[j], g[j + 1]);
            }
        }
        cout << g[i] << " ";
    }
    cout << endl;

    // sorting -> use - bubble sort
    for (int i = 0; i < n; i++) // n-1 passes
    {
        for (int j = 0; j < n - 1; j++)
        {
            if (c[j] > c[j + 1])
            {
                swap(c[j], c[j + 1]);
            }
        }
        cout << c[i] << " ";
    }
    cout << endl;
    cout << endl;
    for (int i = 0; i < n; i++) // n-1 passes
    {
        for (int j = 0; j < n; j++)
        {
            int count = 0;
            int i = 0;
            j = 0;
            while (i < n && j < m)

                if (c[j] >= g[i])
                {
                    count++;
                    i++;
                    j++;
                }
                else
                  j++;
            cout << count;
            break;
        }
    }
}