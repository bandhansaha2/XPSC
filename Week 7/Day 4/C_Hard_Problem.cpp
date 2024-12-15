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
        ll m,a,b,c;
        cin >> m >> a >> b >> c;
        ll seated = 0, left = 0;
        if(m - a >= 0) {
            seated += a;
            left += m - a;
        }
        else {
            seated += m;
        }
        if(m - b >= 0) {
            seated += b;
            left += m - b;
        }
        else {
            seated += m;
        }
        seated += min(left,c);
        cout << seated << endl;
    }

    return 0;
}