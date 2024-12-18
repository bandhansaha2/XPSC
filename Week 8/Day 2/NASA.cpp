#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "YES" << '\n'
#define No cout << "NO" << '\n'
using namespace std;
const int maxN = (1LL << 15);
vector <int> allpal;

bool isPal (int x) {
    string s = to_string(x);
    int len = s.size();
    for(int i=0; i<len/2; i++) {
        if(s[i] != s[len-i-1]) {
            return false;
        }
    }
    return true;
}

void markPal() {
    for(int i=0; i<maxN; i++) {
        if(isPal(i)) allpal.push_back(i);
    }
}

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    markPal();

    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> v(n), count(maxN+1);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            count[v[i]]++;
        }

        ll ans = n;

        for(int i=0; i<n; i++) {
            for(int j=0; j<allpal.size(); j++) {
                int curr = (v[i] ^ allpal[j]);
                ans += count[curr];
            }
        }
        cout << ans/2 << endl;
    }

    return 0;
}