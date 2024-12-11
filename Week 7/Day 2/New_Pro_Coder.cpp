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
    
    int x,y;
    cin >> x >> y;
    if(y >= float(x)/2) cout << "NEWBIE";
    else cout << "PRO";
    //cout << x/2;

    return 0;
}