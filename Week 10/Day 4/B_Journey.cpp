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
        ll n,a,b,c;
        cin >> n >> a >> b >> c;
        ll ans = 0;
        if(n <= a) ans = 1;
        else if (n <= a+b) ans = 2;
        else if(n <= a+b+c) ans = 3;
        else {
            ll num = n / (a+b+c);
            ans += num*3;
            if(n % (a+b+c) != 0) {
                if((num*(a+b+c)) + a >= n) ans++;
                else if((num*(a+b+c)) + a + b >= n) ans += 2;
                else ans += 3;
            } 
        }
        cout << ans << endl;
    }

    return 0;
}