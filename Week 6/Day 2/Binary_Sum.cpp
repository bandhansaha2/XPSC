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
        int n,k;
        cin >> n >> k;

        if(n%2 == 0) {
            if(n/2 == k) Yes;
            else No;
        }
        else {
            if(n/2 == k || (n/2)+1 == k) Yes;
            else No;
        }
    }

    return 0;
}