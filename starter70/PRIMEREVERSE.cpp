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
        string a;
        string b;
        cin >> a >> b;
        int z1 = 0, o1 = 0, z2 = 0, o2 = 0;
        for (int i = 0; i < n; i++)
        {
            if (a[i] == '0')
            {
                z1++;
            }
            else
            {
                o1++;
            }
        }
        for (int i = 0; i < n; i++)
        {
            if (b[i] == '0')
            {
                z2++;
            }
            else
            {
                o2++;
            }
        }
        if (z1 == z2 && o1 == o2)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }
    return 0;
}