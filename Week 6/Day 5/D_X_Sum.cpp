#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;

int a[205][205];

ll sum (int x,int y,int n,int m) {
    ll res = 0;
    int indx = 0;
    while(x-indx>-1 && y-indx>-1) {
        res += a[x-indx][y-indx];
        indx++;
    }
    indx = 0;
    while(x+indx<n && y+indx<m) {
        res += a[x+indx][y+indx];
        indx++;
    }
    indx = 0;
    while(x+indx<n && y-indx>-1) {
        res += a[x+indx][y-indx];
        indx++;
    }
    indx = 0;
    while(x-indx>-1 && y+indx<m) {
        res += a[x-indx][y+indx];
        indx++;
    }
    return res - (3 * (a[x][y]));
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n,m; cin >> n >> m;
        
        for(int i=0; i<n; i++) {
            for(int j=0;  j<m; j++) {
                cin >> a[i][j];
            }
        }
        ll ans = 0;
        for(int i=0; i<n; i++) {
            for(int j=0;  j<m; j++) {
                ans = max(ans,sum(i,j,n,m));
            }
        }
        cout << ans << endl;
    }

    return 0;
}