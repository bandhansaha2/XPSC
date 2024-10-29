#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int a,b,t; cin >> a >> b >> t;

    //eto bar production hbo
    int production = t/a;

    cout << production*b;

    return 0;
}