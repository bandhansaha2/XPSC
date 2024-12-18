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
        int n,m;
        cin >> n >> m;
        if(n == m) Yes;
        else if(n < m) No;
        else {
            if((n - m) % 2 == 0) Yes;
            else No;
        }
    }

    return 0;
}