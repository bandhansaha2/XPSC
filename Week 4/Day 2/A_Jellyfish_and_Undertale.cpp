#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        long long int a, b, n;
        cin >> a >> b >> n;
        long long int sum = b;
        
        vector <long long int> v(n);
        for(int i=0; i<n; i++) {
            cin >> v[i];
            if(v[i]+1 <= a) sum+=v[i];
            else sum+=a-1;
        }
        cout << sum << endl;
    }

    return 0;
}
