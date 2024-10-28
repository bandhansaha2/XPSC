#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;

    string str = to_string(n);
    string s = "";

    int des = 4 - str.length();

    for(int i=0; i<des; i++) {
        s += '0';
    }
    
    string ans = s+str;
    cout << ans;

    return 0;
}