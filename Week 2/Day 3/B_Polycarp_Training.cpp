#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    multiset <int> ms;

    for(int i=0;  i<n; i++) {
        int x; cin >> x;
        ms.insert(x);
    }
    int ans = 0, problem = 1;

    while(!ms.empty()) {
        auto lb = ms.lower_bound(problem);
        if(lb != ms.end()) {
            ans++;
            ms.erase(lb);
        }
        else break;
        problem++;
    }

    cout << ans << endl;
    
    return 0;
}