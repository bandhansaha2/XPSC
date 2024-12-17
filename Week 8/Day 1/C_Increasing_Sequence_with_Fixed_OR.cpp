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
        ll n; cin >> n;
        deque <ll> dq;
        for(int k=0; k<=__lg(n); k++) {
            if((n>>k)&1) {
                ll val = n-(1LL<<k);
                if(val > 0) dq.push_front(val);
            }
        }
        dq.push_back(n);
        cout << dq.size() << endl;
        for(auto it:dq) cout << it << " ";
        cout << endl;
    }

    return 0;
}