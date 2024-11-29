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
        int n,k;
        cin >> n >> k;
        vector <ll> pre(n+1,0);

        for(int i=n-k+1; i<=n; i++) {
            cin >> pre[i];
        }

        vector <ll> real(n+1);

        if(n==1 || k==1) {
            Yes;
            continue;
        }

        for(int i=n; i>=n-k+2; i--) {
            real[i] = pre[i] - pre[i-1];
        }
        
        bool flag = true;
        for(int i=n-k+2; i<n; i++) {
            if(real[i] > real[i+1]) {
                flag = false;
                break;
            }
        }

        if(!flag) {
            No;
            continue;
        }

        for(int i=n-k+1; i>1; i--) {
            real[i] = real[i+1];
            pre[i-1] = pre[i] - real[i];
        }
        real[1] = pre[1];

        for(int i=1; i<n; i++) {
            if(real[i] > real[i+1]) {
                flag = false;
                break;
            }
        }
        
        if(flag) Yes;
        else No;
    }

    return 0;
}