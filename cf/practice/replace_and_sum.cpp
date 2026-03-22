#include <algorithm>
#include <bits/stdc++.h>
using namespace std;

#define int long long
#define endl '\n'
#define pb push_back
#define all(x) x.begin(), x.end()

void setIO() {
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif
}

void solve() {
    int n, q;
    cin >> n >> q;

    vector<int> a(n), b(n);

    for(int i = 0; i < n; i++) cin >> a[i];
    for(int i = 0; i < n; i++) cin >> b[i];

    
    //find max elements of the array  
    for(int i = n -1; i >= 0; i--){
        int val = a[i];
        if(i+1 < n) val = max(val, a[i+1]);
        val = max(val, b[i]);
        a[i] = val;
    }

    // prefix sum
    vector<int> pref(n, 0);
    int sum{0};
    for(int i = 0; i < n; i++){
        sum += a[i];
        pref[i] = sum;
    }

    while(q--){
       int l, r;
       cin >> l >> r;
       l--, r--;
       if (!l) cout << pref[r];
        else cout << pref[r] - pref[l-1];
        cout << " ";
    }
    cout << "\n";
}



int32_t main() {
    ios::sync_with_stdio(false);
    cin.tie(0);
    setIO();

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}


