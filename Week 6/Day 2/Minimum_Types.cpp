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
        int n; ll x,sum=0;
        cin >> n >> x;
        vector<ll> cost(n), vec(n),val(n);
        for(int i=0; i<n; i++) {
            cin >> cost[i];
        }
        for(int i=0; i<n; i++) {
            cin >> vec[i];
            val[i] = cost[i] * vec[i];
        }

        sort(val.rbegin(),val.rend());

        int count = 0;
        for(auto it : val) {
            sum+=it;
            count++;
            if(sum >= x) break;
        }

        if(sum < x) cout << -1 << endl;
        else cout << count << endl;

    }

    return 0;
}




        //cout << endl;
        // vector <pair<ll,ll>> v(n);
        // for(int i=0; i<n; i++) {
        //     v[i] = {cost[i],vec[i]};
        // }
        // sort(v.rbegin(),v.rend());
        // int count = 0;
        // for(auto[z,y] : v) {
        //     sum+=(z*y);
        //     count++;
        //     if(sum>=x) break;
        // }
        // if(sum < x) cout << -1 << endl;
        // else cout << count << endl;
