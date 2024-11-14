#include <bits/stdc++.h>
using namespace std;

vector<int> FirstNegativeInteger(vector<int>& a, int k) {
        int n = a.size();
        int l=0, r=0;
        queue <int> q;
        vector <int> v;
        while(r<n) {
            if(a[r] < 0) q.push(a[r]);
            if(r-l+1 == k) {
                if(!q.empty()) {
                    v.push_back(q.front());
                    if(a[l] == q.front()){
                        q.pop();
                    }
                }
                else v.push_back(0);
                l++;
                r++;
            }
            else r++;
        }
        return v;
    }