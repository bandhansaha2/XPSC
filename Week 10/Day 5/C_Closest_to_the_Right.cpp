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
    
    int n,k;
    cin >> n >> k;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    while(k--) {
        int key; cin >> key;
        int ans = n, l = 0, r = n - 1, mid;
        while(l<=r) {
            mid = l+(r-l)/2;
            if(v[mid] >= key) {
                ans = mid, r = mid-1;
            }
            else l = mid+1;
        }
        cout << ans+1 << endl;
    }


    return 0;
}