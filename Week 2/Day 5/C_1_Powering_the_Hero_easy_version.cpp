#include <bits/stdc++.h>
#define ll long long int
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        priority_queue <ll> pq;
        int n;
        cin >> n;
        ll sum = 0;

        for(int i=0; i<n; i++) {
            ll x; cin >> x;
            
            if(x == 0) {
                if(!pq.empty()) {
                    sum+=pq.top();
                    pq.pop();
                }
            }
            else pq.push(x);
        }
        cout << sum << endl;
    }

    return 0;
}