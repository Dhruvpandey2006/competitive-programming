#include <bits/stdc++.h>

using namespace std;

void selection_sort(string &s)
{
    int n = s.length();
    for (int i = 0; i <= n - 2; i += 2)
    {
        int minimum = i;
        for (int j = i; j <= n - 1; j += 2)
        {
            if (s[j] < s[minimum])
            {
                minimum = j;
            }
        }
        char temp = s[minimum];
        s[minimum] = s[i];
        s[i] = temp;
    }
}

int main()
{
    string s;
    cin >> s;
    selection_sort(s);
    int n = s.length();
    for (int i = 0; i < n; i++)
    {
        cout << s[i];
    }

    return 0;
}