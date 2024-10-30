#include <bits/stdc++.h>
using namespace std;
#define ll long long int

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    ll n; cin >> n;
    ll sum = 0;

    map <int,int> mp;
    for(int i=1; i<=n; i++) {
        int x; cin >> x;
        mp.insert({x,x});
        sum+=x;
    }

    if(sum%2 == 0) {
        cout << sum;
    }
    else {
        ll chotoOdd = -1;
        for(auto[key,value] : mp) {
            if(key%2 != 0) {
                chotoOdd = key;
                break;
            }
        }
        if(chotoOdd == -1) cout << 0;
        else cout << sum - chotoOdd;
    }
    
    return 0;
}