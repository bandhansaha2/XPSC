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
        int x,y,sum = 0,count = 0;
        cin >> x >> y;
        count = ceil(float(y)/2);
        if(x <= count*7) cout << count << endl;
        else {
            x -= (count*7);
            count += (ceil(float(x)/15));
            cout << count << endl;
        }
    }

    return 0;
}