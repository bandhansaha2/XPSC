#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n, m;
    cin >> n >> m;
    vector <long long> a(n), b(m);

    for(int i=0; i<n; i++) {
        cin >> a[i];
    }
    for(int i=0; i<m; i++) {
        cin >> b[i];
    }
    int l=0, r=0;
    long long ans=0;
    while(l<n && r<m) {
        int curr = a[l], countA=0, countB=0;
        while(l<n && a[l] == curr) {
            countA++, l++;
        }
        while(r<m && curr > b[r]) r++;
        while(r<m && b[r] == curr) {
            countB++, r++;
        }
        ans+= (1LL *countA *countB);
    }
    cout << ans << endl;
    return 0;
}