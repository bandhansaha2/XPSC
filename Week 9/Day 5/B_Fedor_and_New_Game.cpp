#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

ll check(ll x,ll mine) {
    ll count = 0;
    for(int i=0; i<20; i++) {
        if(((mine>>i)&1) != ((x>>i)&1)) {
            count++;
        }
    }
    return count;
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n,m,k;
    cin >> n >> m >> k;
    vector <ll> v(m+1);
    for(int i=0; i<=m; i++) {
        cin >> v[i];
    }

    ll mine = v.back(),frnd = 0;
    for(int i=0; i<m; i++) {
        ll count = check(mine,v[i]);
        if(check(v[i],mine) <= k) frnd++;
    }

    cout << frnd;
    
    return 0;
}