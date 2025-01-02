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
    
    int n,q;
    cin >> n >> q;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    while(q--) {
        int key; cin >> key;
        bool found = false;
        int l=0, r=n-1,mid;
        while(l<=r) {
            mid = (l+r)/2;
            if(v[mid] == key) {
                found = true;
                break;
            }
            else if(v[mid] < key) l = mid+1;
            else r = mid - 1;
        }
        if(found) Yes;
        else No;
    }

    return 0;
}