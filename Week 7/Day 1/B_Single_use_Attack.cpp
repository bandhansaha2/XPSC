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
        int h,x,y;
        cin >> h >> x >> y;
        float count = 0;
        if(y > x) {
            h = h - y;
            count++;
        }

        count += ceil(float(h)/x);
        cout << count << endl;
    }

    return 0;
}