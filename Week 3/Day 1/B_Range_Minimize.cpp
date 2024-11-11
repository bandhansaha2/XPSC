#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque <ll> v,cpy1(n),cpy2(n),cpy3(n);
        for(int i=0; i<n; i++) {
            ll x; cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        cpy1 = cpy2 = cpy3 = v;

        ll ans1,ans2,ans3;
        cpy1.pop_back();
        cpy1.pop_front();
        ans1 = cpy1.back()-cpy1.front();  

        cpy2.pop_back();
        cpy2.pop_back();
        ans2 = cpy2.back()-cpy2.front();

        cpy3.pop_front();
        cpy3.pop_front();
        ans3 = cpy3.back()-cpy3.front();
        
        cout << min({ans1,ans2,ans3}) << endl;
    }

    return 0;
}