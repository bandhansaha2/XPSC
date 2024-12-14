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
        int x,y;
        cin >> x >> y;
        int yScrn = ceil((float(y)*4)/8), xLeft = (yScrn*15) - (y*4) ;
        if(xLeft >= x) cout << yScrn << endl;
        else {
            x -= xLeft;
            yScrn += (ceil(float(x)/15));
            cout << yScrn << endl;
        }
    }

    return 0;
}