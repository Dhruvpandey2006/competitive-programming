#include <iostream>
using namespace std;

void watermelon(int n)
{
    if (n > 2 && n % 2 == 0)
    {
        cout << "YES";
    }
    else
    {
        cout << "NO";
    }
}

int main()
{
    int n;
    cin >> n;
    watermelon(n);

    return 0;
}