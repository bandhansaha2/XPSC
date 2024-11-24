#include <bits/stdc++.h>
#define ll long long
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        long long n, c, sum=0, count=0;
        cin >> n >> c;
        vector <long long> v(n+1);
        for(int i=1; i<=n; i++) {
            cin >> v[i];
            v[i]+=i;
        }
        sort(v.begin(), v.end());
        for(int i=1; i<=n; i++) {
            sum+=v[i];
            if(sum > c) break;
            else count++;
        }
        cout << count << endl;
    }

    return 0;
}