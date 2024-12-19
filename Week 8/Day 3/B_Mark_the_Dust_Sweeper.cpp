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
        vector <ll> v(n);

        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        
        ll sum = 0, zero = 0;
        int l=0;
        while(v[l] == 0) l++;
        while(l < n-1) {
            sum+=v[l];
            if(v[l] == 0) zero++;
            l++;
        }
        cout << sum+zero << endl;
    }

    return 0;
}