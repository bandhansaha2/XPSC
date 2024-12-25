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
    
    int x; cin >> x;
    if(x == 1) cout << 1;
    else if(x == 2) cout << 1;
    else if(x == 3) cout << 2;
    else if(x == 4) cout << 1;
    else if(x == 5 || x == 6) cout << 2;
    else cout << 3;
    cout << endl;





    return 0;
}