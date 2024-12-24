#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Yes" << '\n'
#define No cout << "No" << '\n'
using namespace std;
 
int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        vector <int> v(n),v2,ans;
        for(int i=0; i<n; i++) {
            cin >> v[i];
        }
        int l=0, r=1;
        while(v[l] <= v[r]) {
            v2.push_back(v[l]);
            l++, r++;
        }
        v2.push_back(v[l]);
        for(int i=r; i<n; i++) {
            ans.push_back(v[i]);
        }
        int m = v2.size();
        for(int i=0; i<m; i++) {
            ans.push_back(v2[i]);
        }
        if(is_sorted(all(ans))) Yes;
        else No;
    }
 
    return 0;
}