#include <bits/stdc++.h>

using namespace std;

int main()
{
    int n;
    int X = 0;
    string s;
    cin >> n;

    for (int i = 1; i <= n; i++)
    {
        cin >> s;
        if (s == "++X")
        {
            X++;
        }
        if (s == "--X")
        {
            X--;
        }
        if (s == "X--")
        {
            X--;
        }
        if (s == "X++")
        {
            X++;
        }
    }
    cout << X << endl;

    return 0;
}