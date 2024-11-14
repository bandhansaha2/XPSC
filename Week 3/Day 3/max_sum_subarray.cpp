#include <bits/stdc++.h>
using namespace std;
long long maximumSumSubarray(vector<int>& a, int k) {
    long long sum = 0, ans = 0;
    int n = a.size();
    int l = 0, r = 0;
        
    while(r < n) {
        sum+=a[r];
        if(r-l+1 == k) {
            ans = max(ans,sum);
            sum-=a[l];
            l++, r++;
        }
        else r++;
    }
    return ans;
}

