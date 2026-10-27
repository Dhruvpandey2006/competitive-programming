#include <bits/stdc++.h>

using namespace std;

int main()
{

    string s1;
    string s2;
    cin >> s1;
    cin >> s2;;
    int len = s1.length();
    for(int i=0;i<len;i++){
        s1[i]=tolower(s1[i]); 
        s2[i]=tolower(s2[i]); 
    }

    for (int i = 0; i < len; i++)
    {
        
            if (s1[i] == s2[i])
            {
               continue;
            }
            if (s1[i] > s2[i])
            {
                cout << 1 << endl;
                return 0;
            }
            if (s1[i] < s2[i])
            {
                cout << -1 << endl;
                return 0;
            }
        }
        cout<<0<<endl;
    
    return 0;
}