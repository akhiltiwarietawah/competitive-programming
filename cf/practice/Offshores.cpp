

// 2 pass version o(3n) , O(n)
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
// 2 pass solution using space 


// void solve() {
//     int n, x, y;
//     cin >> n >> x >> y;
//
//     // Pass 1: total calculate karo
//     vector<int> a(n);
//     int total = 0;
//     for(int i = 0; i < n; ++i){
//         cin >> a[i];
//         total += (a[i] / x) * y;
//     }
//
//     // Pass 2: best candidate dhundo
//     int ans = LLONG_MIN;
//     for(int i = 0; i < n; ++i)
//         ans = max(ans, total - (a[i]/x)*y + a[i]);
//
//     cout << ans << endl;
//
// }
//



// best solution without using space and in one pass

void solve() {
    int n, x, y;
    cin >> n >> x >> y;

    int total = 0;
    int best = LLONG_MIN;  // max of (a[i]%x + (a[i]/x)*(x-y))

    for(int i = 0; i < n; ++i){
        int val;
        cin >> val;
        total += (val/x)*y;
        best = max(best, (val%x) + (val/x)*(x-y));
    }

    cout << total + best << endl;
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




