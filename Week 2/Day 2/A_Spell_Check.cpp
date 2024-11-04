#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;

    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        map <char,int> mp;

        if(n != 5 && (n > 5 || n < 5)) {
            cout << "NO" << endl;
        }
        else {
            for(auto it : s) {
                mp[it]++;
            }
            if(mp['T'] == 1 && mp['i'] == 1 && mp['m'] == 1 && mp['u'] == 1 && mp['r'] == 1) {
                cout << "YES" ;
            }
            else cout << "NO";
            cout << endl;
        }
    }

    return 0;
}