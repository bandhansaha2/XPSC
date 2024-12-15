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
        int n,count = 0; cin >> n;
        for(int i=1; i<=n; i++) {
            if(n - i > 0) count++;
        }
        cout << count << endl;
    }

    return 0;
}