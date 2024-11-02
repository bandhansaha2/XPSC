#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string str,r,cp; cin >> str;
        r = str;
        set <char> s;

        for(int i=0; i<n; i++) {
            s.insert(r[i]);
        }

        for(auto it : s) cp+=it;

        map <char,char> mp;
        int m = 0, size = s.size();

        if(size%2 == 0) m = (size/2)-1;
        else m = (size/2);

        for(int i=0; i<=m; i++) {
            char l = cp[i], ri = cp[size-1];
            mp[l] = ri;
            mp[ri] = l;
            size--;
        } 

        for(auto it : str) {
            it = mp[it];
            cout << it;
        }
        cout << endl;
    }

    return 0;
}