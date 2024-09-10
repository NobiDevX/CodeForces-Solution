#include <bits/stdc++.h>
using namespace std;
int main()
{
    string s;
    bool isture = true;
    cin >> s;
    for (int i = 0; i < s.length(); i++)
    {
        if (s[i] == 'W' and s[i + 1] == 'U' and s[i + 2] == 'B')
        {
            i += 2;
            if (!isture)
            {
                cout << " ";
            }
        }
        else
        {
            isture = false;
            cout << s[i];
        }
    }
    return 0;
}