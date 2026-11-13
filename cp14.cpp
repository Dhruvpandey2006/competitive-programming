#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    int a, b;
    cin >> a >> b;

    while (a <= b)
    {
        a = 3 * a;
        b = 2 * b;
        count++;
    }

    cout << count;

    return 0;
}