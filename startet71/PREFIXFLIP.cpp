#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n, k, ans = 999;
        cin >> n >> k;
        string s;
        cin >> s;
        int arr[n];
        int count = 0;
        for (int i = 1; i < n; i++)
        {
            if (s[i - 1] != s[i])
            {
                count++;
                arr[i] = count;
            }
            else
                arr[i] = count;
        }
        arr[0] = 0;
        for (int i = n - 1; i >= 0; i--)
        {
            if ((i - (k - 1)) < 0)
                break;
            int check = arr[i] - arr[i - k + 1];
            if (s[i] == '0')
                check++;
            ans = min(ans, check);
        }
        cout << ans << endl;
    }
}