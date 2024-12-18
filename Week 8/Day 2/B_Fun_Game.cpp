#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s,t;
        cin >> s >> t;

        if(s == t) {
            Yes;
            continue;
        }

        int pos = -1;
        for(int i=0; i<n; i++) {
            if(s[i] == '1') {
                pos = i;
                break;
            }
        }
        if(pos != -1) {
            bool flag = true;
            for(int i=0; i<n; i++) {
                if(s[i] != t[i]) {
                    if(pos > i) {
                        flag = false;
                        break;
                    }
                }
            }
            if(flag) Yes;
            else No;
        }
        else No;
    }

    return 0;
}