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
    
    int n; cin >> n;
    vector <int> v(n);
    for(int i=0; i<n; i++) {
        cin >> v[i];
    }
    bool flag = false;
    for(int i=0; i<pow(2,n); i++) {
        ll sum = 0;
        for(int k=0; k<n; k++) {
            if((i>>k) & 1) {
                sum += v[k];
            }
            else {
                sum -= v[k];
            }
        }
        if(sum % 360 == 0) {
            flag = true; 
            break;
        }
    }
    if(flag) Yes;
    else No;

    return 0;
}