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
        ll sum = 0, count = 0, mx = INT_MIN;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum += v[i];
            mx = max(mx,v[i]);
            if(sum - mx == mx) count++;
        }
        // sort(all(v));
        
        // pre[0] = v[0];
        // if(pre[0] == 0) count++;
        // for(int i=1; i<n; i++) {
        //     pre[i] = v[i] + pre[i-1];
        //     if(pre[i] == 0) count++;
        // }
        
        // for(int i=0; i<n-1; i++) {
        //     if(pre[i] == v[i+1]) count++;
        // }
        cout << count << endl;
    }

    return 0;
}