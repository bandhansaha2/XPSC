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
    
    int n; cin >> n;
    string s = "", a = "aabb";
    if(n < 4) {
        if(n == 1) s = "a";
        else if(n == 2) s = "aa";
        else s = "bba";
        cout << s << endl;
        return 0;
    }
    int count = n/4, left = n - (count*4);
    for(int i=1; i<=count; i++) {
        s += a;
    }
    if(left == 1) s += "a";
    else if(left == 2) s += "aa";
    else if(left == 3) s += "aab";
    cout << s ;

    return 0;
}