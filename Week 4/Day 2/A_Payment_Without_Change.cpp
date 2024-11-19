#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        long long a, b, c, d;
        cin >> a >> b >> c >> d;

        long long mod = d % c;
        if(a * c + b >= d && mod<=b) cout << "YES" << endl;
        else cout << "NO" << endl;
    }

    return 0;
}