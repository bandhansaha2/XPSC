#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tst; cin >> tst;

    map <string,int> mp;

    for(int i=0; i<tst; i++) {
        string s; cin >> s;
        
        if(mp[s] == 0) cout << "NO" << endl;
        else cout << "YES" << endl;

        mp[s]++;
    }

    return 0;
}