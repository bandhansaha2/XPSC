#include <bits/stdc++.h>
using namespace std;

int main()
{
    ios::sync_with_stdio(false);
    cin.tie(nullptr);
    
    int n; cin >> n;
    deque <int> dq(n);
    for(int i=0; i<n; i++) {
        cin >> dq[i];
    }
    int sum1=0,sum2=0,who=1;
    while(!dq.empty()) {

        int left=dq.front(),right=dq.back();
        int mx = max(left,right);

        if(who%2==0) {
            sum2+=mx;
        }
        else {
            sum1+=mx;
        }

        if(mx == left) dq.pop_front();
        else dq.pop_back();
            
        who++;
    }
    
    cout << sum1 << " " << sum2 << endl;

    return 0;
}