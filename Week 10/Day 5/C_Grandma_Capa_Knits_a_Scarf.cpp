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
        int n; string s;
        cin >> n >> s;
        int ans = INT_MAX;
        for(int i='a'; i<='z'; i++) {
            int cng = 0, l = 0, r = n-1;
            while(l <= r) {
                if(s[l] != s[r]) {
                    if(s[l] == i) {
                        l++, cng++;
                    }
                    else if(s[r] == i) {
                        r--,cng++;
                    }
                    else {
                        cng = INT_MAX;
                        break;
                    }
                }
                else l++, r--;
            }
            ans = min(ans,cng);
        }
        if(ans == INT_MAX) cout << -1 << endl;
        else cout << ans << endl;
    }

    return 0;
}