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
        ll a,b,c;
        cin >> a >> b >> c;

        ll sum = (a+b+c), count = sum/9;

        if(a>=count && b>=count && c>=count && sum%9 == 0) Yes;
        else No;
    }
 
    return 0;
}