#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int t; cin >> t;
    while(t--) {
        int n; cin >> n;
        deque <int> dq(n);
        for(int i=0; i<n; i++) {
            dq[i] = i+1;
        }
        int fAns = 0, op = n-1;
        deque <pair<int,int>> ans;

        while(op--) {
            int l = dq.size()-2, r = dq.size()-1;
            double num = ceil(double(dq[l]+dq[r])/2);
            //cout << dq[l] << " " << dq[r] << " " << num << endl;
            //cout << " " << num << " ";
            ans.push_back({dq[l],dq[r]});
            dq.erase(--dq.end());
            dq.erase(--dq.end());
            dq.push_back(num);
            fAns = int(num);
        }
        cout << fAns << endl;
        for( auto [x,y] : ans) {
            cout << x << " " << y << endl;
        }
        
    }

    return 0;
}








    //     deque <int> dq;
    //     for(int i=1; i<=n; i++) {
    //         dq[i] = i;
    //     }
    //     while(op--) {
    //         int pos1 = n-2, pos2 = n;

    //         if(dq.size() == 2) {
    //             cout << (dq[1] + dq[2])/2;
    //             continue;
    //         }

    //         if(dq.size() % 2 ==  0) {
    //             int num = (pos1+pos2)/2;
    //             dq.erase(dq.begin()+2);
    //             dq.erase(--dq.end());
    //             dq.push_back(num);
    //             pos1 = dq.size()-1;
    //             pos2 = dq.size();

    //         }
    //         else {
    //             int num = (n+n-2)/2;
    //             dq.erase(dq.begin()+2);
    //             dq.erase(--dq.end());
    //             dq.push_back(num);
    //         }
            


    //         if(num%2 == 0) {

    //         }
    //         else {
                
    //         }
            


    //     }
    // }