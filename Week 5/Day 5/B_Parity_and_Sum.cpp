#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        ll n; cin >> n;
        vector <ll> x(n);
        vector <ll> Odd,Even;
        for(int i=0; i<n; i++) {
            cin >> x[i];
            if(x[i] % 2 == 0) {
                Even.push_back(x[i]);
            }
            else Odd.push_back(x[i]);
        }
        sort(Odd.begin(),Odd.end());
        sort(Even.begin(),Even.end());

        if(n==1 || Even.size()==n) cout << 0 << endl;
        else {
            ll m = Even.size(), mx = Odd.back(), ans = 0;
            bool flag = true;
            for(int i=0; i<m; i++) {
                if(Even[i] > mx) {
                    cout << m+1 << endl;
                    flag = false;
                    break;
                }
                else {
                    ans++;
                    mx+=Even[i];
                }
            }
            if(flag) cout << ans << endl;
        }
    }

    return 0;
}
