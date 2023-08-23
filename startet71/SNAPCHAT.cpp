#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], b[n], count = 0, max = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        for (int i = 0; i < n; i++)
        {
            cin >> b[i];
        }
        for (int i = 0; i < n; i++)
        {
            if (a[i] != 0 && b[i] != 0)
            {
                count += 1;
                if (count > max)
                {
                    max = count;
                }
            }
            else
            {
                count = 0;
            }
        }
        cout << max << endl;
    }
}