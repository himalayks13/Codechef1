/*#include <bits/stdc++.h>
using namespace std;
int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        int n;
        cin >> n;
        int a[n], count = 1, flag = 0;
        for (int i = 0; i < n; i++)
        {
            cin >> a[i];
        }
        sort(a, a + n);
        /*for (int i = 0; i < n - 1; i++)
        {
            if (a[i] == a[i + 1])
            {
                count += 1;
            }
            else if ((count % 2) != 0)
            {
                flag = 1;
                break;
            }
            else
            {
                count = 1;
            }
        }
        if (flag == 1)
        {
            cout << "NO" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }*/
/* for (int i = 0; i < n - 1; i++)
 {
     if (a[i] == a[i + 1])
     {
         count++;
     }
     else if ((count % 2) == 0)
     {
         count = 1;
         continue;
     }
     else
     {
         flag = 1;
         break;
     }
 }
 if ((count % 2) != 0)
 {
     cout << "NO" << endl;
 }
 else if (flag == 0)
 {
     cout << "YES" << endl;
 }
 else
 {
     cout << "NO" << endl;
 }
}
}*/
#include <iostream>
#include <algorithm>
using namespace std;

int main()
{
    // your code goes here
    long long t, n;
    cin >> t;
    while (t--)
    {
        cin >> n;
        long long a[n];
        for (int i = 0; i < n; i++)
            cin >> a[i];
        int flag = 0;
        sort(a, a + n);
        for (int i = 0; i < n; i++)
        {
            int count = 0;
            for (int j = 0; j < n; j++)
            {
                if (a[i] != a[j])
                {
                    break;
                }
                count++;
            }
            if (count % 2 != 0)
            {
                flag = 1;
            }
        }
        if (flag == 1)
            cout << "NO" << endl;
        else
            cout << "YES" << endl;
    }
    return 0;
}