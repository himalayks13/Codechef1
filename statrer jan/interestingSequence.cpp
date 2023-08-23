#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        long long int a, b = 0;
        cin >> a;
        while (a % 2 == 0)
        {
            a = a / 2;
            b = b + 1;
        }
        cout << b << endl;
    }
    return 0;
}