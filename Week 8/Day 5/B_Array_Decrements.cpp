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
        int n; cin >> n;
        vector <ll> a(n), b(n),c(n);
        bool flag = false;
        for(int i=0; i<n; i++) {
            cin >> a[i];
        }
        ll mx = -1e12;
        for(int i=0; i<n; i++) {
            cin >> b[i];
            if(!flag) {
                if(a[i] < b[i]) flag = true;
                c[i] = a[i] - b[i];
                mx = max(mx,c[i]);
            }
        }
        if(flag) No;
        else {
            bool ans = false;
            for(int i=0; i<n; i++) {
                if(b[i] > 0) {
                    if(a[i] - mx != b[i]) {
                        ans = true;
                        break;
                    }  
                } 
            }
            if(ans) No;
            else Yes;
        }
    }

    return 0;
}