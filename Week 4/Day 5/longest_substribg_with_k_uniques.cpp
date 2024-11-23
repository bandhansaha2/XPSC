    #include <bits/stdc++.h>
    using namespace std;


    int longestKSubstr(string &s, int k) {
    map<char,int>mp;
    int l=0, r=0, ans=-1, n=s.size();
    while(r < n) {
        mp[s[r]]++;
        if(mp.size()==k){
            ans = max(ans,(r-l+1));
        }
        else {
            while(mp.size()>k && l<=r) {
                mp[s[l]]--;
                if(mp[s[l]]==0) {
                    mp.erase(s[l]);
                }
                l++;
            }
        }
        r++;
    }
        return ans;
    }
    

