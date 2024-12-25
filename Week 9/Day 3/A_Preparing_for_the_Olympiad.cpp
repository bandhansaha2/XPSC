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
        vector<int>v(n),v2(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        for(int i=0; i<n; i++) {
            cin >> v2[i];
        }
        int sum1 = 0, sum2 = 0;
        for(int i=0; i<n; i++) {
            if((i+1 < n) && v[i] > v2[i+1]) {
                sum1 += v[i];
                sum2 += v2[i+1];
            }
            if(i == n-1) sum1+= v[i];
        }
        cout << sum1 - sum2 << endl;
    }

    return 0;
}