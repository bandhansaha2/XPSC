#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n,x;
    cin >> n >> x;

    deque <ll> dq;

    for(int i=0; i<n; i++) {
        ll val; cin >> val;
        if(val != x) dq.push_back(val);
    }

    for(auto it : dq) cout << it << " ";
    cout << endl;

    return 0;
}