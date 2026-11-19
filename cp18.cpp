#include <bits/stdc++.h>
#include <algorithm>
using namespace std;

int main()
{
    int count1 = 0;
    int count2 = 0;
    string s;
    cin >> s;
    for (int i = 0; i < s.size(); i++)
    {
        if (isupper(s[i]))
        {
            count1++;
        }
        else if (islower(s[i]))
        {
            count2++;
        }
    } 
        for (int i = 0; i < s.size(); i++)
        {
            if (count1 > count2)
            {
                cout << (char)toupper(s[i]);
            }
            else
            {
                cout << (char)tolower(s[i]);
            }
        }
    return 0;
    }