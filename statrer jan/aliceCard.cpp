#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int k;
        int n = 52;
        cin >> k;
        for (int i = 0; i < 52; i++)
        {
            if (n % k == 0)
            {
                cout << i << endl;
                break;
            }
            n--;
        }
    }
    return 0;
}