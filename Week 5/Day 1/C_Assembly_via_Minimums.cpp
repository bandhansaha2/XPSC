#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n;
        cin >> n;
        vector <long long> v, ans(n);
        
        for(int i=0; i<(n*n-n)/2; i++) {
            long long x;
            cin >> x;
            v.push_back(x);
        }
        sort(v.begin(),v.end());
        int i=1, pos=n-i;
        while(n-i > 0){
            ans[i-1] = v[pos-1];
            i++;
            pos+=n-i;         
        }
        ans[n-1] = 1e9;
        for(auto it : ans) cout << it << " ";
        cout << endl;
    }

    return 0;
}