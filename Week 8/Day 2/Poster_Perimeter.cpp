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
        int n,m,k;
        cin >> n >> m >> k;

        int dif = 1e8;
        for(int i=1; i<=n; i++) {
            for(int j=1; j<=m; j++) {
                dif = min(dif,abs((2*(i+j)) - k));
                if(dif == 0) break;
            }
        }
        cout << dif << endl;
    }

    return 0;
}