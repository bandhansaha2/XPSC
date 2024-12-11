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
        int n,k,p;
        cin >> n >> k >> p;
        vector <int> v(n);
        ll sum = 0;
        for(int i=0; i<n; i++) {
            cin >> v[i];
            sum+=v[i];
        }
        sort(v.rbegin(),v.rend());
        ll ved = v[0]+k, varun = p+(sum - v[0]);
        if(ved > varun) cout << "Ved";
        else if(ved < varun) cout << "Varun";
        else cout << "Equal";
        cout << endl;
    }

    return 0;
}