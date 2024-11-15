#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n, m, h;
        cin >> n >> m >> h;
        vector<long long>cars,powers;
        for(int i=0; i<n; i++) {
            long long x; cin >> x;
            cars.push_back(x);
        }
        sort(cars.begin(),cars.end(),greater<int>());
        for(int i=0; i<m; i++) {
            long long x; cin >> x;
            powers.push_back(x);
        }
        sort(powers.begin(),powers.end(),greater<int>());
        long long ans = 0;
        for(int i=0; i<min(n,m); i++) {
            long long sum = 0;
            sum += powers[i]*h;
            ans +=min(sum,cars[i]);
        }
        cout << ans << endl;
    }

    return 0;
}