#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;


int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll l,r;
    cin >> l >> r;

    Yes;
    for(ll i=l; i <= r; i+=2) {
        cout << i << " " << i+1 << endl;
    }

    //cout << __gcd(2,3);

    return 0;
}