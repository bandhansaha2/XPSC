#include <bits/stdc++.h>
#define ll long long
#define endl '\n'
#define all(x) x.begin(),x.end()
#define Yes cout << "Ramos" << '\n'
#define No cout << "Zlatan" << '\n'
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        string s; cin >> s;
        int zero = 0, one = 0;
        for(auto it:s) {
            if(it == '1') one++;
            else zero++;
        }
        int minimumPairs = min(one,zero);

        if(minimumPairs % 2 == 0) Yes;
        else No;
    }

    return 0;
}