#include <bits/stdc++.h>

using namespace std;

int main()
{
    int count = 0;
    string s;
    cin >> s;
    int leng = s.length();
    for (int i = 0; i < leng; i++)
    {
        int found = 0;
        for (int j = 0; j < i; j++)
        {
            if (s[i] == s[j])
            {
                found = 1;
                break;
            }
        }
        if(found ==0){
            count++;
        }
    }
    if(count%2==0){
        cout<<"CHAT WITH HER!"<<endl;
    }else{
        cout<<"IGONRE HIM!"<<endl;
    }
    return 0;
}