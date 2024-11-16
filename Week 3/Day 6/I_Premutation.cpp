#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        int num1 = 0, num2 = 0, cnt1 = 0, cnt2 = 0;
        int cntv2 = 0;
        vector <int> tmp,v1,v2;
        for(int j=0; j<n; j++) {
            for(int i=0; i<n-1; i++) {
                int x; cin >> x;
                if(j == 0 && i == 0) {
                    num1 = x;
                    cnt1++;
                } 
                if(j == 0) {
                    v1.push_back(x);
                }
                if(j != 0 && i == 0) {
                    if(x != num1) {
                        num2 = x;
                        cnt2++;
                    }
                    else cnt1++;
                } 
                if(j > 0 && x != num1 && num2>0 && cntv2<n-1) {
                    v2.push_back(x);
                    cntv2++;
                }
                tmp.push_back(x);
            }
        }
        if(cnt1 > cnt2) {
            cout << num1 << " ";
            for(auto it : v2) cout << it << " ";
        }
        else {
            cout << num2 << " ";
            for(auto it : v1) cout << it << " ";
        }

         cout << endl;

    }

    return 0;
}