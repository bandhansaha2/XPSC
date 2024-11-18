#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int tst; cin >> tst;
    while(tst--) {
       int x, y;
       cin >> x >> y;
       cout << min(x,y)%3 << endl;
    }

    return 0;
}