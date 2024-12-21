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
        // ll n,a,b,x,y; cin >> n;
        // for(int i=sqrt(n); i>0; i--) {
        //     if(n%i == 0) {
        //         a = n/i, b = i;
        //         x = max(a,b);
        //         break;
        //     } 
        // }
        // y = x ^ min(a,b);
        ll n; cin >> n;
        cout << n << " " << n-1 << endl;
    }

    return 0;
}