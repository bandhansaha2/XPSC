#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        char ch; cin >> ch;
        string s; cin >> s;

        if(s.length() == 1 && s[0] == 'g') {
            cout << 0 << endl;
            continue;
        }
        if(ch == 'g') {
            cout << 0 << endl;
            continue;
        }
        s+=s;
        int mx = 0;
        vector <int> G,C;

        for(int i=0; i<2*n; i++) {
            if(s[i] == 'g' && i>=n) {
                G.push_back(i);
                break;
            }
            if(s[i] == 'g') G.push_back(i);
            if(s[i] == ch && i>=n) continue;;
            if(s[i] == ch) C.push_back(i);
        }

        for(auto val : C) {
            auto it = lower_bound(G.begin(),G.end(),val);
            mx = max(mx,((*it) - val));
        }
        cout << mx << endl;
    }

    return 0;
}