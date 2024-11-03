#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    string s1,s2;
    cin >> s1 >> s2;

    int count = 0, n = s1.length();

    for(int i=0; i<n; i++) {
        if(s1[i] != s2[i]) count++;
    }

    cout << count;
    return 0;
}